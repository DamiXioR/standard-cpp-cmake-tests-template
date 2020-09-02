#include "catch.hpp"
#include "random.hpp"

SCENARIO("Should return class name", "[name]") {

    GIVEN("Build class with argument Geralt"){

        Random geralt = Random("Geralt");

        WHEN("Use function getName()"){

            std::string expectedName = geralt.getName();
            
            THEN("Should return Geralt"){
                REQUIRE(expectedName == "Geralt");
            }

        }

    }

    GIVEN("Build class with argument Yennefer"){

        Random yennefer = Random("Yennefer");

        WHEN("Use function getName()"){

            std::string expectedName = yennefer.getName();
            
            THEN("Should return Yennefer"){
                REQUIRE(expectedName == "Yennefer");
            }

        }

    }


}
