#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm>

class Deck {
private:
      std::vector<Card> cards; 
    std::vector<Card> playerHand;

public:
    Deck();

   void shuffle(); 
    Card deal();  
    bool isEmpty() const;
    void drawHand();  
    void displayHand() const; 
    Card chooseCard(); 
};

#endif