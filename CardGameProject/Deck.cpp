#include "Deck.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
Deck::Deck () {
    for (int suit =0; suit < 4; ++suit){
        cards.push_back(Card(rank,suit));
        for (int rank = 2; rank <= 14; ++rank) {
            cards.pusj_back(Card(rank,suit));
        }
    }
currentCardIndex=0
}
void Deck::shuffle() {
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(cards.begin(), cards.end());

Card Deck::deal() {
    if(currentCardIndex <cards.size())  {
        return cards[currentCardIndex++];
        }else{
            throw std::out_of_range("No cards left in the deck!");
        }
        }
bool Deck::isEmpty() const{
    return currentCardIndex >= cards.size();
}
}
