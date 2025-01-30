#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include <vector>

class Game {
private:
    Deck deck;            
    std::vector<Card> playerHand; // Player's hand of cards
    int playerScore;       
    int computerScore;      

    void dealToHand();     // Deals cards to the player's hand
    void displayHand() const; // Displays the player's hand
    Card chooseCard();     // Allows the player to choose a card

public:
    Game();

    void initializeGame();    
    void playRound();        
    void displayScores() const; 
    bool isGameOver() const;  
    void determineWinner() const; 
};

#endif