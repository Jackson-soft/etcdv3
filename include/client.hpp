#pragma once

#include "rpc.grpc.pb.h"
#include <cstdint>
#include <functional>
#include <google/protobuf/message.h>
#include <grpcpp/grpcpp.h>
#include <map>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace Uranus
{
// grpc 同步客户端
class Client
{
public:
    // etcd call back
    using EtcdCallBack = std::function<void(const std::shared_ptr<google::protobuf::Message> &msg)>;

public:
    Client()  = delete;
    ~Client() = default;

    explicit Client(const std::shared_ptr<grpc::Channel> &channel) : mKV(etcdserverpb::KV::NewStub(channel)) {}

    explicit Client(const std::string &endPoint)
        : Client(grpc::CreateChannel(endPoint, grpc::InsecureChannelCredentials()))
    {
    }

    // kv interface
public:
    grpc::Status Put(const std::string_view key, const std::string_view val, int ttl = 0)
    {
        etcdserverpb::PutRequest req;
        req.set_key(key.data());
        req.set_value(val.data());
        if (ttl > 0) {
            auto id = Grant(ttl);
            req.set_lease(id);
        }

        etcdserverpb::PutResponse resp;
        grpc::ClientContext ctx;
        return mKV->Put(&ctx, req, &resp);
    }

    std::int64_t Get(std::map<std::string, std::string> &result, const std::string_view key, bool withPrefix = false)
    {
        etcdserverpb::RangeRequest req;
        req.set_key(key.data());

        if (withPrefix) {
            req.set_range_end(getPrefix(key));
        }

        req.set_sort_target(etcdserverpb::RangeRequest_SortTarget::RangeRequest_SortTarget_KEY);
        req.set_sort_order(etcdserverpb::RangeRequest_SortOrder::RangeRequest_SortOrder_ASCEND);

        etcdserverpb::RangeResponse resp;
        grpc::ClientContext ctx;

        auto status = mKV->Range(&ctx, req, &resp);
        if (status.ok()) {
            result.clear();
            for (int i = 0; i < resp.kvs_size(); ++i) {
                result.emplace(std::make_pair(resp.kvs(i).key(), resp.kvs(i).value()));
            }
            return resp.count();
        }
        return 0;
    }

    std::int64_t Delete(const std::string_view key, bool withPrefix = false)
    {
        etcdserverpb::DeleteRangeRequest req;
        req.set_key(key.data());
        if (withPrefix) {
            req.set_range_end(getPrefix(key));
        }

        etcdserverpb::DeleteRangeResponse resp;
        grpc::ClientContext ctx;

        auto status = mKV->DeleteRange(&ctx, req, &resp);
        if (status.ok()) {
            return resp.deleted();
        }
        return 0;
    }

    void Compact(std::int64_t rev)
    {
        etcdserverpb::CompactionRequest req;
        req.set_revision(rev);

        grpc::ClientContext ctx;
        etcdserverpb::CompactionResponse resp;
        mKV->Compact(&ctx, req, &resp);
    }

    // lease interface
public:
    // return lease id
    std::int64_t Grant(std::int64_t ttl)
    {
        if (ttl <= 0) {
            return 0;
        }
        etcdserverpb::LeaseGrantRequest req;
        req.set_ttl(ttl);

        grpc::ClientContext ctx;
        etcdserverpb::LeaseGrantResponse resp;
        auto status = mLease->LeaseGrant(&ctx, req, &resp);
        if (status.ok()) {
            return resp.id();
        }
        return 0;
    }

    bool Revoke(std::int64_t id)
    {
        etcdserverpb::LeaseRevokeRequest req;
        req.set_id(id);

        grpc::ClientContext ctx;
        etcdserverpb::LeaseRevokeResponse resp;
        auto status = mLease->LeaseRevoke(&ctx, req, &resp);

        return status.ok();
    }

    bool TimeToLive(std::int64_t id, bool keys = false)
    {
        etcdserverpb::LeaseTimeToLiveRequest req;
        req.set_id(id);
        req.set_keys(keys);

        grpc::ClientContext ctx;
        etcdserverpb::LeaseTimeToLiveResponse resp;

        auto status = mLease->LeaseTimeToLive(&ctx, req, &resp);
        return status.ok();
    }

    bool Leases(std::vector<std::int64_t> &result)
    {
        etcdserverpb::LeaseLeasesRequest req;

        grpc::ClientContext ctx;
        etcdserverpb::LeaseLeasesResponse resp;
        auto status = mLease->LeaseLeases(&ctx, req, &resp);
        if (status.ok()) {
            result.clear();
            for (auto i = 0; i < resp.leases_size(); ++i) {
                result.emplace_back(resp.leases(i).id());
            }
            return true;
        }
        return false;
    }

    void KeepAlive(std::int64_t id) {}

    void KeepAliveOnce(std::int64_t id) {}

    void CloseLease() {}

    // watch interface
public:
    void Watch(const EtcdCallBack &callBack, const std::string_view key, std::int64_t start = 0, bool prefix = false)
    {
        etcdserverpb::WatchRequest req;
        req.mutable_create_request()->set_key(key.data());
        req.mutable_create_request()->set_start_revision(start);

        if (prefix) {
            req.mutable_create_request()->set_range_end(getPrefix(key));
        }

        grpc::ClientContext ctx;
        etcdserverpb::WatchResponse resp;
        // grpc::CompletionQueue cq;
        // mWatch->AsyncWatch(&ctx, &cq, (void *)1);
        auto stream = mWatch->Watch(&ctx);
        stream->Write(req);
        stream->WritesDone();
        while (stream->Read(&resp)) {
        }
    }

    void CloseWatch() {}

private:
    // 获取range_end
    std::string getPrefix(const std::string_view key)
    {
        std::string rangeEnd{key};
        int ascii       = static_cast<int>(rangeEnd.at(rangeEnd.length() - 1));
        char end        = static_cast<char>(ascii + 1);
        rangeEnd.back() = end;
        return rangeEnd;
    }

private:
    std::unique_ptr<etcdserverpb::KV::Stub> mKV;
    std::unique_ptr<etcdserverpb::Lease::Stub> mLease;
    std::unique_ptr<etcdserverpb::Watch::Stub> mWatch;

    std::string mUserName;
    std::string mPassword;
};
}  // namespace Uranus
