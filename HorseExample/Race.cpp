#include <iostream>
#include <string>
#include "horse.h"
using namespace std;


Horse::Horse(string n, int as, int s, int gw){
    name = n;
    average_speed = as;
    stamina = s;
    ground_weakness = gw;
}

int ground_condition(string g){
    if (g == "dry"){
        return 0;
    } else {
        return 1;
    }
}

int Horse::find_winner(int gc, float length){
    int score = average_speed;
    if (ground_weakness == gc){
        score = score - 15;
    } if (stamina == 5){
        score = score + 10;
    } else if (stamina == 1){
        score = score - 10;
    } else if (stamina == 4){
        if (length > 1.7){
            score = score - 2;
        } else {
            score = score + 6;
        }
    } else if (stamina == 3){
        if (length > 1.2){
            score = score - 5;
        } else {
            score = score + 4;
        }
    } else if (stamina == 2){
        if (length > 0.7){
            score = score - 7;
        } else {
            score = score + 2;
        }
    }

    return score;
}



int main()
{

    string g = "dry";
    int gc = ground_condition(g);

    float length = 0.8;

    Horse h1("Calypso", 40, 4, 1);
    Horse h2("Squid", 35, 4, -1);
    Horse h3("Bug", 25, 2, 0);


    int s1;
    s1 = h1.find_winner(gc, length);
    int s2;
    s2 = h2.find_winner(gc, length);
    int s3;
    s3 = h3.find_winner(gc, length);

    string name;

    if (s1 > s2 && s1 > s3){
        name = h1.name;
    } else if (s2 > s1 && s1 > s3){
        name = h2.name;
    } else if (s3 > s2 && s3 > s1){
        name = h3.name;
    } else if (s1 == s2 && s1 == s3){
        name = "all three horses";
    } else if (s1 == s2){
        name = h1.name + " and " + h2.name;
    } else if (s1 == s3){
        name = h1.name + " and " + h3.name;
    } else {
        name = h2.name + " and " + h3.name;
    }

    cout << h1.name << "'s score is " << s1 << endl;
    cout << h2.name << "'s score is " << s2 << endl;
    cout << h3.name << "'s score is " << s3 << endl;
    cout << "The winner of the race is " << name << endl;
    return 0;
}