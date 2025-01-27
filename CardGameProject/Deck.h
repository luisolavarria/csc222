#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

class Deck {
private:
    std::vector<Card> cards; 
    int currentCardIndex;   
public:
    
    Deck();

   
    void shuffle();              
    Card deal();                 
    bool isEmpty() const;         
    void displayDeck() const;     
};

#endif
