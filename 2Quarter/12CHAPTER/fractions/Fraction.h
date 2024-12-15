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


	};

	int gcd(int a, int b);