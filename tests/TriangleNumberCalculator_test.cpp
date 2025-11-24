
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/TriangleNumberCalculator.hpp"

TEST_CASE( "TriangleNumberCalculator::value computes the nth triangle number" ) {
    TriangleNumberCalculator calculator;

    REQUIRE( calculator.value(1) == 1 );
    REQUIRE( calculator.value(2) == 3 );
    REQUIRE( calculator.value(3) == 6 );
    REQUIRE( calculator.value(4) == 10 );
    REQUIRE( calculator.value(5) == 15 );
}

TEST_CASE( "TriangleNumberCalculator::add computes the sum of two triangle numbers" ) {
    TriangleNumberCalculator calculator;

    REQUIRE( calculator.add(1, 1) == 2 );
    REQUIRE( calculator.add(2, 3) == 9 );
    REQUIRE( calculator.add(4, 2) == 13 );
}

TEST_CASE( "TriangleNumberCalculator::subtract computes the difference of two triangle numbers" ) {
    TriangleNumberCalculator calculator;

    REQUIRE( calculator.subtract(1, 1) == 0 );
    REQUIRE( calculator.subtract(2, 3) == -3 );
    REQUIRE( calculator.subtract(4, 2) == 7 );
}

