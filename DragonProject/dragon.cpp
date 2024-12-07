#include "dragon.h"

dragon::dragon(std::string x, int y, int z) {
    name = x;
    size = y;
    horns = z;
}

std::string dragon::battle_test(int mp, float base_strength) {
    float total_strength = base_strength + size * 0.5 + horns * 0.2; // Strength is affected by size and horns

    if (mp > 50 && total_strength > 10.0) {
        return " is strong!";
    } else {
        return " is not ready for battle.";
    }
}
