#ifndef GAME_H
#define GAME_H

#include "Deck.h"

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
game.h