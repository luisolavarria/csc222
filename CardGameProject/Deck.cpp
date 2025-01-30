#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>
#include <iostream>

Deck::Deck() {
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    for (const std::string &suit : suits) {
        for (int rank = 2; rank <= 14; ++rank) {
            cards.push_back(Card(rank, suit));
        }
    }
    shuffle();
}

void Deck::shuffle() {
    std::srand(std::time(0));
    std::random_shuffle(cards.begin(), cards.end());
}

Card Deck::deal() {
    if (!cards.empty()) {
        Card drawnCard = cards.back();
        cards.pop_back();
        return drawnCard;
    }
    else{
        return Card(0,"None");
        } 
}

bool Deck::isEmpty() const {
    return cards.empty();
}

void Deck::drawHand() {
    playerHand.clear();
    for (int i = 0; i < 4 && !cards.empty(); ++i) {
        playerHand.push_back(deal());
    }
}

void Deck::displayHand() const {
    std::cout << "Your hand:\n";
    for (size_t i = 0; i < playerHand.size(); ++i) {
        std::cout << i + 1 << ": ";
        playerHand[i].display();
    }
}

Card Deck::chooseCard() {
    displayHand();
    int choice;
    do {
        std::cout << "Choose a card (1-4): ";
        std::cin >> choice;
    } while (choice < 1 || choice > 4);

    return playerHand[choice - 1];
}