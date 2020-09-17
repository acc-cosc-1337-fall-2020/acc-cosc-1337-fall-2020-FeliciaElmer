#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
  REQUIRE(is_even(2) == true);
  REQUIRE(is_even(3) == false);
}

// Test_Case I missed

TEST_CASE("Test get_generation function")
{
  REQUIRE(get_generation(2000) == "Centenial");
  REQUIRE(get_generation(1980) == "Millenial");
  REQUIRE(get_generation(1776) == "Invalid Year");
  REQUIRE(get_generation(1970) == "Generation X");
  REQUIRE(get_generation(1980) == "Baby boomer");
  REQUIRE(get_generation(1940) == "Silent Generation");
}

