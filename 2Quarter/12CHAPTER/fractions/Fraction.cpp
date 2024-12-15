#include "Fraction.h"


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    int divisor = gcd(numerator, denominator);
    this->numerator = numerator / divisor;
    this->denominator = denominator / divisor;
    
}

Fraction::Fraction(string fraction) {
 string delim = "/";
    if (fraction.find(delim) != string::npos) {  
        numerator = stoi(fraction.substr(0, fraction.find(delim)));
        fraction.erase(0, fraction.find(delim) + delim.length());
        denominator = stoi(fraction);
    } else {  
        numerator = stoi(fraction);
          //stoi converts strings to ints.
        denominator = 1;
        }
}

std::string Fraction::toString() {
    if (denominator == 1)
        return to_string(numerator);
    return to_string(numerator) + "/" + to_string(denominator);
}
Fraction::Fraction(int x){
    numerator = x;
    denominator = 1;
}

bool Fraction::operator==(const Fraction& x) const {
    return numerator * x.denominator == x.numerator * denominator;
}

bool Fraction::operator!=(const Fraction& x) const {
    return !(*this == x);
}

bool Fraction::operator<(const Fraction& x) const {
    return numerator * x.denominator < x.numerator * denominator;
}

bool Fraction::operator>(const Fraction& x) const {
    return x < *this;
}

bool Fraction::operator<=(const Fraction& x) const {
    return !(*this > x);
}

bool Fraction::operator>=(const Fraction& x) const {
    return !(*this < x);
}



