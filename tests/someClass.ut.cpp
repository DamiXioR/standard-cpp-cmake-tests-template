#include "catch.hpp"
#include "someClass.hpp"

SCENARIO("someClass constructor takes name")
{
    GIVEN("Create AnotherRandom class object") {
        SomeClass eric("Eric");
        WHEN("Using getName()") {
            THEN("Should return name of student"){
                REQUIRE(eric.getName() == "Eric");
            }
        }
    }
}