#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "horse.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    Horse h1("Calypso", 40, 4, 1);
    Horse h2("Squid", 30, 4, -1);
    Horse h3("Bug", 25, 2, 0);
    CHECK(h1.To_String() == "Horse Name: Calypso, Average Speed: 40, Stamina: 4, Ground Weakness: wet");
    CHECK(h2.To_String() == "Horse Name: Squid, Average Speed: 30, Stamina: 4, Ground Weakness: none");
    CHECK(h3.To_String() == "Horse Name: Bug, Average Speed: 25, Stamina: 2, Ground Weakness: dry");
}

TEST_CASE("Test can find the winner or the race") {
    Horse h1("Calypso", 40, 4, 1);
    Horse h2("Squid", 30, 4, -1);
    Horse h3("Bug", 25, 2, 0);
    CHECK(h1.find_winner(0, 0.5) == 46);
    CHECK(h2.find_winner(1, 2) == 28);
    CHECK(h3.find_winner(0, 0.9) == 3);
}