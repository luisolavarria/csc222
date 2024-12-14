#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "doctest.h"
#include "Fraction.h"
using namespace std;

TEST_CASE("Test can create Fractions using two constructors") {
    Fraction f1;
    CHECK(f1.numerator == 0);
    CHECK(f1.denominator == 1);
    Fraction f2(3, 4);
    CHECK(f2.numerator == 3);
    CHECK(f2.denominator == 4);
}


TEST_CASE("Test third Fraction constructor using a string") {
    Fraction f1("3/4");
    CHECK(f1.numerator == 3);
    CHECK(f1.denominator == 4);
    Fraction f2("37/149");
    CHECK(f2.numerator == 37);
    CHECK(f2.denominator == 149);
}


TEST_CASE("Test can render a Fraction as a string") {
    Fraction f1(17, 25);
    CHECK(f1.to_string() == "17/25");
    CHECK(f1.to_string() == "17/25");
    Fraction f2(-7, 11);
    CHECK(f2.to_string() == "-7/11");
    CHECK(f2.to_string() == "-7/11");
}