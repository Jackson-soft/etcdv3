#define CATCH_CONFIG_MAIN

#include "Client.hpp"
#include <iostream>

TEST_CASE("1: All test cases reside in other .cpp files (empty)", "[multi-file:1]") {}

TEST_CASE("get", "get")
{
    Client cl("127.0.0.1:2379");
    cl.Put("fusu", "hello");
    std::map<std::string, std::string> ret;
    std::cout << cl.Get(ret, "fusu") << std::endl;
    for (const auto &it : ret) {
        std::cout << it.first << ":" << it.second << std::endl;
    }
}