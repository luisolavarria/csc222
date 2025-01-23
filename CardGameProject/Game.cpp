#include "Game.h"
#include <iostream>

Game::Game() {
    Deck deck;
    deck.shuffle();

    for(int i = 0; i < 26; ++i) {
        player1.push(deck.deal());
        player2.push(deck.deal());
    }
}
void Game::start() {
    while (!player1.empty() && !player2.empty()){
        Card card1 = player1.front(); player1.pop();
        Card card2 = player2.front(); player2.pop();
        if (card1.getRank() >card2.getRank()){
            std::cout << "Player 1 wins this round.\n";
    } else if (card1.getRank() <card2.getRank()){
        std::cout<< "Player 2 wins this round.\n";
    } else {
        std::cout<< "It's a Tie!\n";
    }
    }
}