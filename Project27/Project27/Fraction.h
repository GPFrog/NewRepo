#pragma once
#include <iostream>

class Fraction
{
private:
	int numer;
	int denom;
public:
	Fraction(int gainedNumer, int gainedDenom)
	{
		numer = gainedNumer;
		denom = gainedDenom;
	}
	Fraction() {}
	void setNumer(int n) { numer = n; }
	void setDenom(int d) { denom = d; }
	int getNumer() { return numer; }
	int getDenom() { return denom; }
	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
};