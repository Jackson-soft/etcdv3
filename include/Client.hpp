#pragma once

#include "KVClient.hpp"
#include <grpcpp/grpcpp.h>
#include <memory>
#include <string>

class Client
{
public:
    Client() {}
    ~Client() {}

public:
    bool Connect(const std::string &endPoint)
    {
        if (!endPoint.size())
            return false;
        mChannel = grpc::CreateChannel(endPoint, grpc::InsecureChannelCredentials());
    }

private:
    KVClient mKV;

    std::shared_ptr<grpc::Channel> mChannel;

    std::string mUserName;
    std::string mPassword;
};
