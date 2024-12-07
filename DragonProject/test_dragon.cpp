#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "dragon.h"

TEST_CASE("Test can create and render dragon") {
    dragon my_dragon("Juan", 10, 5);
    CHECK(my_dragon.battle_test(100, 5.0) ==  "Your Dragon is strong!");
    CHECK(my_dragon.battle_test(100, 5.0) ==  "Your Dragon is not ready for battle.");
}

TEST_CASE("Test can create and render dragon") {
    dragon my_dragon("Pedro", 10, 5);
    CHECK(my_dragon.battle_test(60, 5.0) == "Your Dragon is strong!");
    CHECK(my_dragon.battle_test(30, 5.0) == "Your Dragon is not ready for battle.");
}
