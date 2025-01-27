#include "Deck.h"
#include <algorithm> 
#include <random>    
#include <iostream>
using namespace std;


Deck::Deck() : currentCardIndex(0) {
    for (int suit = 0; suit < 4; ++suit) {     
        for (int rank = 2; rank <= 14; ++rank) { 
            cards.emplace_back(rank, suit);   
        }
    }
}


void Deck::shuffle() {
    random_device rd;                       
    mt19937 g(rd());                       
    std::shuffle(cards.begin(), cards.end(), g);
    currentCardIndex = 0;                     
}


Card Deck::deal() {
    if (!isEmpty()) {
        return cards[currentCardIndex++];     
    } else {
        throw runtime_error("No more cards in the deck!");
    }
}


bool Deck::isEmpty() const {
    return currentCardIndex >= cards.size();
}


void Deck::displayDeck() const {
    for (const auto& card : cards) {
        card.display();
    }
}