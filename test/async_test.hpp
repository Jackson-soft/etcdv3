#pragma once

#include "async_client.hpp"

#include <catch2/catch_test_macros.hpp>

// 异步客户端测试

TEST_SUITE("test async client") {
    TEST_CASE("async client") {
        CHECK(1 == 1);
    }
}