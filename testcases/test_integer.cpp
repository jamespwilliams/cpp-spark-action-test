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

SPARK_TEST_CASE("test_divide_round_down","Test that the integer division function rounds down.", "divide", "Divides two integers."){
    //todo consider testing behavior on division by zero
    REQUIRE(divide_round_down(7,-9) == -1);
    REQUIRE(divide_round_down(11,3) == (11 / 3));
    REQUIRE(divide_round_down(-11,3) == -4);
}

SPARK_TEST_CASE("test_divide_round_up","Test that the integer division function rounds up.", "divide", "Divides two integers."){
    //todo consider testing behavior on division by zero
    REQUIRE(divide_round_up(7,-9) == 0);
    REQUIRE(divide_round_up(11,3) == (11 / 3) + 1);
    REQUIRE(divide_round_up(-11,3) == -3);
}

SPARK_TEST_CASE("test_divide","Test that the integer division function works.", "divide", "Divides two integers."){
    REQUIRE(divide(7,-9) == Approx(((double)7) / ((double)-9)));
    REQUIRE(divide(11,3) == Approx(((double)11 / ((double)3))));
    REQUIRE(divide(-11,3) == Approx(((double)-11 / ((double)3))));
}
