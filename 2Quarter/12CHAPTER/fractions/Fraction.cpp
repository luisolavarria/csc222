#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;


Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction::Fraction(string fraction) {
    string divisor = "/";
    numerator = stoi(fraction.substr(0, fraction.find(divisor)));
    fraction.erase(0, fraction.find(divisor) + divisor.length());
    denominator = stoi(fraction);
}

std::string Fraction::to_string() {
    return ::to_string(numerator) + "/" + ::to_string(denominator);
}



