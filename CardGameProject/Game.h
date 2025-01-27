#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include <vector>

class Game {
private:
    Deck deck;        
    std ::vector<Card> playerHand;    
    int playerScore;       
    int computerScore;      
    void dealToHand();
    void displayHand() const;
    Card chooseCard();

public:
   
    Game();

  
    void initializeGame();    
    void playRound();        
    void displayScores() const; 
    bool isGameOver() const;  
    void determineWinner() const; 
};

#endif
