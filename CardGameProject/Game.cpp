#include "Game.h"
#include <iostream>
using namespace std;


Game::Game() : playerScore(0), computerScore(0) {}


void Game::initializeGame() {
    deck.shuffle();
    cout << "The deck has been shuffled. Let's start the game!" << endl;
}


void Game::playRound() {
    if (deck.isEmpty()) {
        cout << "No more cards in the deck. The game is over!" << endl;
        return;
    }

  
    Card playerCard = deck.deal();
    Card computerCard = deck.deal();

   
    cout << "Player's card: ";
    playerCard.display();
    cout << "Computer's card: ";
    computerCard.display();

   
    if (playerCard.getRank() > computerCard.getRank()) {
        cout << "Player wins this round!" << endl;
        playerScore++;
    } else if (playerCard.getRank() < computerCard.getRank()) {
        cout << "Computer wins this round!" << endl;
        computerScore++;
    } else {
        cout << "It's a tie!" << endl;
    }
}


void Game::displayScores() const {
    cout << "Current Scores:" << endl;
    cout << "Player: " << playerScore << endl;
    cout << "Computer: " << computerScore << endl;
}


bool Game::isGameOver() const {
    return deck.isEmpty();
}


void Game::determineWinner() const {
    cout << "\nFinal Scores:" << endl;
    cout << "Player: " << playerScore << endl;
    cout << "Computer: " << computerScore << endl;

    if (playerScore > computerScore) {
        cout << "Congratulations! You win!" << endl;
    } else if (playerScore < computerScore) {
        cout << "The computer wins! Better luck next time!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}