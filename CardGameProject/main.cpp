#include "Game.h"
#include <iostream>
using namespace std;

int main() {
   
    Game game;

  
    game.initializeGame();

  
    while (!game.isGameOver()) {
        game.playRound();     
        game.displayScores();  

      
        cout << "\nDo you want to play another round? (y/n): ";
        char choice;
        cin >> choice;

       