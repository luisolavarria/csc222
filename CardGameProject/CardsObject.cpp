#include <iostream>

class Deck {
 std::vector<Card> cards; // Contains all cards in the deck
 int currentCardIndex; // Tracks the next card to be dealt 
 public: Deck() { // Initialize the deck with 52 cards
  for (int suit = 0; suit < 4; ++suit) {
     for (int rank = 2; rank <= 14; ++rank) {
         cards.push_back(Card(rank, suit));
          } 
          }
 currentCardIndex = 0;
  } void shuffle() {
     std::random_shuffle(cards.begin(), cards.end());
      }
     Card deal() { 
        if (currentCardIndex < cards.size()) { 
            return cards[currentCardIndex++]; 
            } else {
                 throw std::out_of_range("No cards left in the deck!");
                  }
                   }
                    bool isEmpty() const {
                         return currentCardIndex >= cards.size();
                          } 
                          };