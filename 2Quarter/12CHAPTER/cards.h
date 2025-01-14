#include <iostream> 
#include <vector>
#include <string>
using namespace std;
struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
    string to_string() const;
    to_string(string a, string b);
};

Card::Card() {
    suit = 0; rank = 0;
}


Card::Card(int s, int r) {
    suit = s; rank = r;
}
string Card::to_string() const
{
    vector<string> suit_strings = {"None", "Clubs", "Diamonds",
                                   "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King"
                                   };

    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}


Card::to_string(string suit, string rank){
    if (suit == "JACKS" & rank == "DIAMONDS"){
    return "Jack of Diamonds";
    }
    }
