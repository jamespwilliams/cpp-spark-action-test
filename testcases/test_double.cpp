#include "../src/double.hpp"
#include <catch2/catch.hpp>
#include <spark_macros.hpp>

using namespace doubles;

SPARK_TEST_CASE ("test_double_add", "Test that the double addition function works.", "add", "Adds two doubles."){
    REQUIRE(add(0.0,0.0) == Approx(0.0));
    REQUIRE(add(-7.0,-9.0) == Approx(-7.0 + -9.0));
    REQUIRE(add(10000.0,1.0) == Approx(10000.0 + 1.0));
}

SPARK_TEST_CASE ("test_double_multiply", "Tests that the double multiplication function works.", "multiply", "Multiplies two doubles."){
    REQUIRE(multiply(0.0,0.0) == Approx(0.0));
    REQUIRE(multiply(-7.0,-9.0) == Approx(-7.0 + -9.0));
    REQUIRE(multiply(10000.0,1.0) == Approx(10000.0 + 1.0));
}

SPARK_TEST_CASE ("test_double_divide_round_down", "Tests that the double multiplication function works.", "multiply", "Multiplies two doubles."){
    //todo consider testing behavior on division by zero
    REQUIRE(divide(7.0,-9.0) == -1);
    REQUIRE(divide(11.0,3.0) == 3);
    REQUIRE(divide(-11.0,3.0) == -4);
}


// TODO: These two test cases are not compatible. It's useful to have a test that fails
// for testing so I'm leaving it here anyway:
SPARK_TEST_CASE ("test_double_divide_round_up", "Tests that the double division function rounds up.", "divide", "Divides one double by another."){
    REQUIRE(divide(7.0,-9.0) == 0);
    REQUIRE(divide(11.0,3.0) == 4);
    REQUIRE(divide(-11.0,3.0) == -3);
}

SPARK_TEST_CASE ("test_double_divide_round_nearest", "Tests that the double divide function rounds to nearest.", "divide", "Divides one double by another."){
    REQUIRE(divide(7.0,-9.0) == -1);
    REQUIRE(divide(11.0,3.0) == 4);
    REQUIRE(divide(-11.0,3.0) == -4);
}

SPARK_TEST_CASE ("test_double_divide", "Tests that the double multiplication function works.", "divide", "Divides one double by another."){
    REQUIRE(divide(7.0,-9.0) == Approx(7.0 / -9.0));
    REQUIRE(divide(11.0,3.0) == Approx(11.0 / 3.0));
    REQUIRE(divide(-11.0,3.0) == Approx(-11.0 / 3.0));
}
