#include "../src/integer.hpp"
#include <catch2/catch.hpp>
#include <spark_macros.hpp>

using namespace integers;

SPARK_TEST_CASE("test_add", "Test that the integer addition function works.", "add", "Adds two integers."){
    REQUIRE(add(0,0) == 0);
    REQUIRE(add(-7,-9) == -7 + -9);
    REQUIRE(add(10000,1) == 10000 + 1);
}

SPARK_TEST_CASE("test_multiply","Test that the integer multiplication function works.", "multiply", "Multiplies two integers."){
    REQUIRE(multiply(0,0) == 0);
    REQUIRE(multiply(0,10) == 0);
    REQUIRE(multiply(-7,-9) == -7 * -9);
    REQUIRE(multiply(10000,1) == 10000 * 1);
}
