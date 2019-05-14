#pragma once
#include <iostream>
#include "functionForFraction.h"

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
	//void reduction();
	void setNumer(int n) { numer = n; }
	void setDenom(int d) { denom = d; }
	int getNumer() { return numer; }
	int getDenom() { return denom; }

	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
	{
		std::cout << fraction.numer << "/" << fraction.denom;
		return os;
	}
	friend Fraction operator+(const Fraction& left, const Fraction& right)
	{
		int numer = (left.numer * right.denom) + (right.numer * left.denom);
		int denom = left.denom * right.denom;
		reduce(numer, denom);
		Fraction fraction(numer, denom);
		return fraction;
	}
	friend Fraction operator-(const Fraction& left, const Fraction& right)
	{
		int numer = (left.numer * right.denom) - (right.numer * left.denom);
		int denom = left.denom * right.denom;
		reduce(numer, denom);
		Fraction fraction(numer, denom);
		return fraction;
	}
	friend Fraction operator*(const Fraction& left, const Fraction& right)
	{
		int numer = left.numer * right.numer;
		int denom = left.denom * right.denom;
		reduce(numer, denom);
		Fraction fraction(numer, denom);
		return fraction;
	}
	friend Fraction operator/(const Fraction& left, const Fraction& right)
	{
		int numer = left.numer * right.denom;
		int denom = left.denom * right.numer;
		reduce(numer, denom);
		Fraction fraction(numer, denom);
		return fraction;
	}
};
/*
void Fraction::reduction()
{
	int cnt = 1;
	while (cnt <= numer)
	{
		if (numer % cnt == 0 && denom % cnt == 0)
		{
			numer = numer / cnt;
			denom = denom / cnt;
			cnt = 1;
		}
		cnt++;
	}
}*/