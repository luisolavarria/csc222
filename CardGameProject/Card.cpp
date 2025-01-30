#include "Card.h"

Card::Card(int r, std::string s) : rank(r), suit(s) {}

int Card::getRank() const {
    return rank;
}

std::string Card::getSuit() const {
    return suit;
}

void Card::display() const {
    std::string rankStr;
    switch (rank) {
        case 11: rankStr = "Jack"; break;
        case 12: rankStr = "Queen"; break;
        case 13: rankStr = "King"; break;
        case 14: rankStr = "Ace"; break;
        default: rankStr = std::to_string(rank); break;
    }
    std::cout << rankStr << " of " << suit << std::endl;
}
