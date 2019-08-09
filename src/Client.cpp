#include "Client.h"

namespace Uranus
{
Client::Client() {}

Client::~Client() {}

Client::Client(std::shared_ptr<grpc::Channel> channel) : mKV(etcdserverpb::KV::NewStub(channel)) {}

Client::Client(const std::string &endPoint) : Client(grpc::CreateChannel(endPoint, grpc::InsecureChannelCredentials()))
{
}

grpc::Status Client::Put(const std::string_view key, const std::string_view val, int ttl)
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

std::int64_t Client::Get(std::map<std::string, std::string> &result, const std::string_view key, bool withPrefix)
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

std::int64_t Client::Delete(const std::string_view key, bool withPrefix)
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

void Client::Compact(std::int64_t rev)
{
    etcdserverpb::CompactionRequest req;
    req.set_revision(rev);

    grpc::ClientContext ctx;
    etcdserverpb::CompactionResponse resp;
    mKV->Compact(&ctx, req, &resp);
}

std::int64_t Client::Grant(std::int64_t ttl)
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

bool Client::Revoke(std::int64_t id)
{
    etcdserverpb::LeaseRevokeRequest req;
    req.set_id(id);

    grpc::ClientContext ctx;
    etcdserverpb::LeaseRevokeResponse resp;
    auto status = mLease->LeaseRevoke(&ctx, req, &resp);

    if (status.ok()) {
        return true;
    }

    return false;
}

bool Client::TimeToLive(std::int64_t id, bool keys)
{
    etcdserverpb::LeaseTimeToLiveRequest req;
    req.set_id(id);
    req.set_keys(keys);

    grpc::ClientContext ctx;
    etcdserverpb::LeaseTimeToLiveResponse resp;

    auto status = mLease->LeaseTimeToLive(&ctx, req, &resp);
    if (status.ok()) {
        return true;
    }

    return false;
}

bool Client::Leases(std::vector<std::int64_t> &result)
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

void Client::Watch(EtcdCallBack callBack, const std::string_view key, std::int64_t start, bool prefix)
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

std::string Client::getPrefix(const std::string_view key)
{
    std::string rangeEnd{key};
    int ascii       = static_cast<int>(rangeEnd.at(rangeEnd.length() - 1));
    char end        = static_cast<char>(ascii + 1);
    rangeEnd.back() = end;
    return rangeEnd;
}
}  // namespace Uranus