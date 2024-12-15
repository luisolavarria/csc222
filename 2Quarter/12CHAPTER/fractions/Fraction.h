	#pragma once
#include <string>
using namespace std;


struct Fraction {

	int numerator;
	int denominator;

	Fraction();
	Fraction(int, int);
	Fraction(string);
	std::string to_string();
	
};
int gcd(int, int);