#ifdef GAME_H
#define GAME_H

#include "Deck.h"
#include "Card.h"
#include <vector>
#include <queue>
class Game {
    private:
    std::vector<class> playerhand;
    int playerScore;
    int computerScore;

    void dealToHand();
    void displayHand() const;
    Card chooseCard();

    std::queue<Card> player1, player2;
    public:
    Game();
    void start ();
    void initializeGame();
    void playground();
    void displayScores() const;
    bool isGameOver() const;
    void determineWinner() const;


};


#endif