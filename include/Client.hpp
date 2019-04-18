#pragma one

#include <string>

#include "KVClient.hpp"

class Client
{

public:
    Client(/* args */) {}
    ~Client() {}

private:
    KVClient mKV;

    std::string mUserName;
    std::string mPassword;
};
