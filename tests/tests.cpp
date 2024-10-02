#define SNITCH_IMPLEMENTATION
#include "snitch_all.hpp"

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? number : factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]")
{
    // REQUIRE(factorial(0) == 1); // this check will fail
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}
