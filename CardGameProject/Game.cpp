#include "Game.h"
#include <iostream>
using namespace std;
Game::Game() : playerScore(0), computerScore(0){}

Game::Game() {
    Deck deck;
    deck.shuffle();

    for(int i = 0; i < 26; ++i) {
        player1.push(deck.deal());
        player2.push(deck.deal());
    }
}
void Game:: initializeGame(){
    deck.shuffle();
    cout<< "The Deck has been shuffled. Let's start the Game!"<< endl;
}

void Game::dealToHand() {
    playerHand.clear();
    for (int i = 0; i < 4; ++i) {
        if (!deck.isEmpty()){
            playerHand.push_back(deck.deal());

        }
    }
    
}
void Game::displayHand() cont {
    cout << "Your Hand:" << endl;
    for (size_t i = 0; i< playerHand.size(); ++i){
        cout << i + 1 << ". ";
        playerHand[i].display();
    }
}
    Card Game:: chooseCard(){
        int choice = 0;
        while(true) {
            cout << "Choose a card to play (1-"<< playerHand.size()<< "): ";
            cin >> choice;
            if (choice >=1 && choice <= static_cast<int>(playerHand.size())) {
                break; }
                else {
                    cout << "You don't have that card" << endl;
                
                }
            }
        Card selectedCard = playerHand[choice - 1];
        playerHand.erase(playerHand.begin () + (choice-1));
        return selectedCard
        }
    void Game:: playRound() {
        if(deck.isEmpty()) {
            cout << "No more cards left! The Game is over"<< endl;
            return;
        }
        dealToHand();
        displayHand();
        Card playerCard = chooseCard
    }
    