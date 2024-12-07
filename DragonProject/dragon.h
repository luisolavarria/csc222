#ifndef DRAGON_H
#define DRAGON_H

#include <string> // Ensure this is included for std::string

struct dragon {
    std::string name;
    int size;
    int horns;

    // Constructor declaration
    dragon(std::string x, int y, int z);

    // Function declaration
    std::string battle_test(int mp, float strength);
};

#endif // DRAGON_H