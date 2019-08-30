#pragma once

#include "Client.hpp"
#include "doctest.h"

TEST_CASE("get")
{
    std::string domain{"10.1.22.0:2379"};
    Uranus::Client cl(domain);
    auto result = cl.Put("fusu", "hello");
    CHECK(result.ok());
    std::map<std::string, std::string> ret;
    auto num = cl.Get(ret, "fusu");
    CHECK(num == ret.size());
    for (const auto &it : ret) {
        MESSAGE(it.first << ":" << it.second);
    }
}

TEST_CASE("put value to etcd") {}
