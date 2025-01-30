#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
private:
    int rank;
    std::string suit;

public:
    Card(int r, std::string s);
    
    int getRank() const;
    std::string getSuit() const;
    void display() const;
};

#endif