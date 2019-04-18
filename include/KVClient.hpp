#pragma one

#include <memory>
#include <string_view>

#include "../proto/etcdserver.pb.h"
#include "../proto/rpc.grpc.pb.h"
#include "Operation.hpp"

class KVClient
{
public:
    KVClient() {}
    ~KVClient() {}

    etcdserverpb::PutResponse Put(std::string_view key, std::string_view val) {}

    etcdserverpb::RangeResponse Get(std::string_view key) {}

    etcdserverpb::DeleteRangeResponse Delete(std::string_view key) {}

    etcdserverpb::CompactionResponse Compact(int64_t rev) {}

    Operation Do() {}

    void Txn() {}

private:
    std::unique_ptr<etcdserverpb::KV::Stub> mKV;
};