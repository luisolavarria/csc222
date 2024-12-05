#ifndef CARD_H
#define CARD_H

struct Horse {
    std::string name;
    int average_speed;
    int stamina;
    int ground_weakness;
    Horse(std::string n, int as, int s, int gw);
    int find_winner(int gc, float length);
    std::string To_String();
};
#endif