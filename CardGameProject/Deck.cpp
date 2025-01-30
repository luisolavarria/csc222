#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck() {
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    for (const auto& suit : suits) {
        for (int rank = 2; rank <= 14; ++rank) {
            cards.emplace_back(rank, suit);
        }
    }
}

void Deck::shuffle() {
    std::srand(std::time(0));
    std::random_shuffle(cards.begin(), cards.end());
}

Card Deck::deal() {
    if (!cards.empty()) {
        Card dealtCard = cards.back();
        cards.pop_back();
        return dealtCard;
    }
    return Card();  // Return an empty card if the deck is empty
}

bool Deck::isEmpty() const {
    return cards.empty();
}