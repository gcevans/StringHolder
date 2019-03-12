#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do
                           // this in one cpp file
#include "catch.hpp"
#include "stringholder.h"

// a) passes b) fails c) crashes
TEST_CASE("String Constructor", "[stringholder]") {
  StringHolder hello("hello, world.");

  REQUIRE(std::string(hello.c_str()) == "hello, world.");
}

TEST_CASE("Assignment operator works when assigned to null string",
          "[stringholder]") {
  StringHolder hello("hello, world.");
  StringHolder nullString;
  hello = nullString;
  REQUIRE(std::string(hello.c_str()) == "");
}
