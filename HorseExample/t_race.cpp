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

string Horse::To_String(){
    string horse;
    string ground;
    if (ground_weakness == 0){
        ground = "dry";
    } else if (ground_weakness == 1){
        ground = "wet";
    } else {
        ground = "none";
    }
    horse = "Horse Name: " + name + ", Average Speed: " + to_string(average_speed) + ", Stamina: " + to_string(stamina) + ", Ground Weakness: " + ground;
    return horse;
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