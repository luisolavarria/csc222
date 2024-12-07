#include "dragon.h"

dragon::dragon(std::string x, int y, int z) {
    name = x;
    size = y;
    horns = z;
}

std::string dragon::battle_test(int mp, float base_strength) {
    // Calculate total strength based on size, horns, and base strength
    float total_strength = base_strength + size * 0.1f + horns * 0.5f; // Adjust these values as needed

    // Check if the dragon passes the test
    if (mp > 50 && total_strength > 10.0) {
        return name + " is strong!";
    } else {
        return name + " is not ready for battle.";
    }
}
