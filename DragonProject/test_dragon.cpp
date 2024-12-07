#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "dragon.h"

TEST_CASE("Test can create and render dragon") {
    dragon d("Drako", 10, 3);  // Example values for name, size, and horns

    // Test 1: Dragon with mp = 60 and base_strength = 5 should be strong
    CHECK(d.battle_test(60, 12) == "Drako is strong!");

    // Test 2: Dragon with mp = 30 and base_strength = 5 should not be ready
    CHECK(d.battle_test(30, 5) == "Drako is not ready for battle.");

    // Test 3: Dragon with mp = 60 and base_strength = 1 should not be strong
    CHECK(d.battle_test(60, 1) == "Drako is not ready for battle.");
}