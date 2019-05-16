#include "Fraction.h"

std::ostream& operator<<(std::ostream& os, const Fraction& fraction)
{
	if (fraction.denom != 1)
		std::cout << fraction.numer << "/" << fraction.denom;
	else
		std::cout << fraction.numer;
	return os;
}