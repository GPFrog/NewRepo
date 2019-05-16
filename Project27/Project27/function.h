#pragma once
#include <string>
#include "Fraction.h"

void runFraction();
int readNumerDenom(int& n, int& d, int& n2, int& d2);
Fraction operator+(Fraction& left, Fraction& right);
Fraction operator-(Fraction& left, Fraction& right);
Fraction operator*(Fraction& left, Fraction& right);
Fraction operator/(Fraction& left, Fraction& right);
void reduction(int& numer, int& denom);