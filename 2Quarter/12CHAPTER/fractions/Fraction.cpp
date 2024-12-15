#include "doctest.h"
#include "Fraction.h"
using namespace std;


Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
	int divisor = gcd( numerator, denominator);
    this->numerator = numerator/divisor;
    this->denominator = denominator/divisor;
}

Fraction::Fraction(string fraction) {
    string delim = "/";
    numerator = stoi(fraction.substr(0, fraction.find(delim)));
    fraction.erase(0, fraction.find(delim) + delim.length());
    denominator = stoi(fraction);
}

std::string Fraction::toString() {
	if (denominator == 1)
        return to_string(numerator);
    return ::to_string(numerator) + "/" + ::to_string(denominator);
}


int gcd(int numerator, int denominator ) {
    int remainder = 0;
    while (denominator != 0) {
        remainder = numerator % denominator;

        numerator = denominator;
        denominator = remainder;
    }
    return numerator;
}

TEST_CASE("Test gcd function") {
    CHECK(gcd(4, 14) == 2);
    CHECK(gcd(16, 12) == 4);
    CHECK(gcd(18, 27) == 9);
}