#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include <vector>

class Game {
private:
    Deck deck;        
    
    int playerScore;       
    int computerScore;      
  

public:
   
    Game();

  
    void initializeGame();    
    void playRound();        
    void displayScores() const; 
    bool isGameOver() const;  
    void determineWinner() const; 
};

#endif
