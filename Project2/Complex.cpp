#include "Complex.h"

std::istream& operator>>(std::istream& is, Complex& complex)
{
	std::string temp;
	std::getline(is, temp, 'i');
	temp = deleteGap(temp);
	if (temp.at(0) == '+')
	{
		temp.erase(0, 1);
	}
	if (hasNotPlus(temp))
	{
		temp.insert(hasNotPlus(temp),"+");
	}
	complex.setReal(stod(temp.substr(0, temp.find('+'))));
	temp = temp.substr(temp.find('+') + 1);
	complex.setImag(stod(temp));
	return is;
}