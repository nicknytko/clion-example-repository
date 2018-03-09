//
// Created by Nicolas Nytko on 3/9/18.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myfunction.h"

TEST_CASE("really bad test case") {
    REQUIRE(MyFunction() == 0);
}