#ifdef CARD_H
#define CARD_H
#include <iostream>
#include <string>

class Card{
    private:
    int rank;
    int suit;
    public:
    Card(int r = 0, std::string s = "");
    void display() const;
    int getRank() const;
    std::string getSuit() const;
};
#endif