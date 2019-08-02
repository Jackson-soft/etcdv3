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
#include <vector>

namespace Uranus
{
// grpc 同步客户端
class Client
{
public:
    // etcd call back
    using EtcdCallBack = std::function<void(std::shared_ptr<google::protobuf::Message> msg)>;

public:
    Client() = delete;
    ~Client();

    explicit Client(std::shared_ptr<grpc::Channel> channel);

    explicit Client(const std::string &endPoint);

    // kv interface
public:
    grpc::Status Put(const std::string_view key, const std::string_view val, int ttl = 0);

    std::int64_t Get(std::map<std::string, std::string> &result, const std::string_view key, bool withPrefix = false);

    std::int64_t Delete(const std::string_view key, bool withPrefix = false);

    void Compact(std::int64_t rev);

    // lease interface
public:
    // return lease id
    std::int64_t Grant(std::int64_t ttl);

    bool Revoke(std::int64_t id);

    bool TimeToLive(std::int64_t id, bool keys = false);

    bool Leases(std::vector<std::int64_t> &result);

    void KeepAlive(std::int64_t id);

    void KeepAliveOnce(std::int64_t id);

    void CloseLease();

    // watch interface
public:
    void Watch(EtcdCallBack callBack, const std::string_view key, std::int64_t start = 0, bool prefix = false);

    void CloseWatch();

private:
    // 获取range_end
    std::string getPrefix(const std::string_view key);

private:
    std::unique_ptr<etcdserverpb::KV::Stub> mKV;
    std::unique_ptr<etcdserverpb::Lease::Stub> mLease;
    std::unique_ptr<etcdserverpb::Watch::Stub> mWatch;

    std::string mUserName;
    std::string mPassword;
};
}  // namespace Uranus
