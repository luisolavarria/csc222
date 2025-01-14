#include <iostream>

class Deck { private: std::vector<Card> cards;
Deck() { for (int suit = HEARTS; suit <= SPADES; ++suit) { for (int rank = TWO; rank <= ACE; ++rank) { cards.push_back({static_cast<Suit>(suit), static_cast<Rank>(rank)}); } } } void shuffle() { std::random_device rd; std::mt19937 g(rd()); std::shuffle(cards.begin(), cards.end(), g); } Card dealCard() { if (!cards.empty()) { Card dealtCard = cards.back(); cards.pop_back(); return dealtCard; } throw std::out_of_range("No more cards in the deck!"); } bool isEmpty() const { return cards.empty(); } };