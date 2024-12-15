	#pragma once
	#include <string>
	using namespace std;


	struct Fraction {

		int numerator;
		int denominator;

		Fraction();
		Fraction(int, int);
		Fraction(string);
		std::string toString();
		Fraction(int);
		

  bool operator==(const Fraction& x) const;
    bool operator!=(const Fraction& x) const;
    bool operator<(const Fraction& x) const;
    bool operator>(const Fraction& x) const;
    bool operator<=(const Fraction& x) const;
    bool operator>=(const Fraction& x) const;
};

	int gcd(int a, int b);