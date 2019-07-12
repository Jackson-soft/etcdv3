#pragma once

#include <cstdint>
#include <grpcpp/grpcpp.h>
#include <memory>
#include <string>

#include "rpc.grpc.pb.h"

// grpc 同步客户端
class Client
{
public:
    Client() = delete;
    ~Client() {}

    explicit Client(std::shared_ptr<grpc::Channel> channel)
        : mKV(etcdserverpb::KV::NewStub(channel))
    {
    }

    explicit Client(const std::string &endPoint)
        : Client(grpc::CreateChannel(endPoint, grpc::InsecureChannelCredentials()))
    {
    }

public:
    grpc::Status Put(const std::string_view key, const std::string_view val, int ttl = 0)
    {
        etcdserverpb::PutRequest req;
        req.set_key(key.data());
        req.set_value(val.data());
        if (ttl > 0) {
        }

        etcdserverpb::PutResponse resp;
        grpc::ClientContext ctx;
        return mKV.get()->Put(&ctx, req, &resp);
    }

    std::int64_t Get(const std::string_view key, bool withPrefix = false)
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

        auto status = mKV.get()->Range(&ctx, req, &resp);
        if (status.ok()) {
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

        auto status = mKV.get()->DeleteRange(&ctx, req, &resp);
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
        mKV.get()->Compact(&ctx, req, &resp);
    }

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

    std::shared_ptr<grpc::Channel> mChannel;

    std::string mUserName;
    std::string mPassword;
};