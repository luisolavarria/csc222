#pragma once
#include <string>
using namespace std;


struct Fraction {

	int numerator;
	int denominator;

	Fraction();
	Fraction(int, int);
	std::string toString();
};