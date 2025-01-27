#ifdef CARD_H
#define CARD_H

class Card{
    private:
    int rankl;
    int suit;
    public:
    Card(int r = 0, int s = 0);
    void display() const;
    int getRank() const;
    int getSuit() const;
};
#endif