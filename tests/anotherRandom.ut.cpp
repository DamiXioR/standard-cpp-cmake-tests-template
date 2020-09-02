#include "catch.hpp"
#include "anotherRandom.hpp"


SCENARIO("AnotherRandom class constructor takes name and age")
{
    GIVEN("Create AnotherRandom class object with arguments") {
        AnotherRandom student("Henry",25);
        WHEN("Using getName()") {
            THEN("Should return name of student"){
                REQUIRE(student.getName() == "Henry");
            }
        }
    }

    GIVEN("Create AnotherRandom class object with arguments") {
        AnotherRandom student("Henry",25);
        WHEN("Using getAge()") {
            THEN("Should return age of student"){
                REQUIRE(student.getAge() == 25);
            }
        }
    }
}

