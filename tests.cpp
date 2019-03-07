#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "stringholder.h"



TEST_CASE( "String Constructor", "[stringholder]" ) {
    StringHolder hello("hello, world.");
    
    REQUIRE( hello.c_str() == "hello, world." );
}
