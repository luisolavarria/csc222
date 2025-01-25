#include "Card.h"
#include <iostream>
using namespace std;


Card::Card(int r, int s) : rank(r), suit(s) {}


int Card::getRank() const {
    return rank;
}


int Card::getSuit() const {
    return suit;
}

string Card::rankToString() const {
    switch (rank) {
        case 11: return "Jack";
        case 12: return "Queen";
        case 13: return "King";
        case 14: return "Ace";
        default: return to_string(rank);
    }
}


string Card::suitToString() const {
    switch (suit) {
        case 0: return "Hearts";
        case 1: return "Diamonds";
        case 2: return "Clubs";
        case 3: return "Spades";
        default: return "Unknown";
    }
}


void Card::display() const {
    cout << rankToString() << " of " << suitToString() << endl;
}