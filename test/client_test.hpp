#pragma once

#include "client.hpp"

#include <catch2/catch_test_macros.hpp>

// 同步客户端测试

TEST_SUITE("test etcd client") {
    std::string    domain{"127.0.0.1:2379"};
    Uranus::Client cl(domain);
    auto           myKey{"ruisi"};
    auto           myValue{"hello"};

    TEST_CASE("put value to etcd") {
        auto result = cl.put(myKey, myValue);
        CHECK(result.ok());
    }

    TEST_CASE("get value from etcd") {
        std::map<std::string, std::string> ret;
        auto                               num = cl.Get(ret, myKey);
        CHECK(num == ret.size());
        for (const auto &it : ret) {
            CHECK_EQ(it.first, myKey);
            CHECK_EQ(it.second, myValue);
            MESSAGE(it.first << ":" << it.second);
        }
    }

    TEST_CASE("test delete key" * doctest::skip()) {
        auto num = cl.Delete(myKey);
        CHECK_EQ(num, 1);
    }
}
