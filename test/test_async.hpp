#pragma once

#include "async_client.hpp"
#include "doctest.h"

TEST_SUITE("test async client")
{
    TEST_CASE("async client") { CHECK(1 == 1); }
}