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

std::string Fraction::toString() {
    return ::to_string(numerator) + "/" + ::to_string(denominator);
}