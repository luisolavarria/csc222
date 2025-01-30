#include "Game.h"
#include <iostream>
using namespace std;
Game::Game() : playerScore(0), computerScore(0){}


void Game:: initializeGame(){
    deck.shuffle();
    cout<< "The Deck has been shuffled. Let's start the Game!"<< endl;
}



   
    void Game:: playRound() {
       deck.drawHand();
    std::cout << "Your cards for this round:\n";
    deck.displayHand();

    Card chosenCard = deck.chooseCard();
    std::cout << "You chose: ";
    chosenCard.display();

    Card computerCard = deck.deal();
    std::cout << "Computer drew: ";
    computerCard.display();

    if (chosenCard.getRank() > computerCard.getRank()) {
        std::cout << "You win this round!\n";
        playerScore++;
    } else if (chosenCard.getRank() < computerCard.getRank()) {
        std::cout << "Computer wins this round!\n";
        computerScore++;
    } else {
        std::cout << "It's a tie!\n";
    }
}
    void Game:: displayScores () const {
        cout << "Current Scores:" << endl;
        cout << "Player: " << playerScore << endl;
        cout << "Computer: " << computerScore << endl;
    }
    bool Game:: isGameOver() const{
        return deck.isEmpty();
    }
    void Game::determineWinner() const {
        cout << "\nFinal Scores:" << endl;
        cout << "Player: " << playerScore << endl;
        cout << "Computer: " << computerScore << endl;
        if (playerScore > computerScore) {
            cout << "Congratuations! You Win!" << endl;
        } else if (playerScore < computerScore) {
            cout << "The Computer wins! Better luck next time"<< endl;}
            else {
                cout << "It's a Tie!" << endl;
            }
    }