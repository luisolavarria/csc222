#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
private:
    int rank;  
    int suit;  

public:
    
    Card(int r = 0, int s = 0);

    
    int getRank() const;
    int getSuit() const;

    void display() const;

    std::string rankToString() const;
    std::string suitToString() const;
};

#endif