#include "Complex.h"

std::istream& operator>>(std::istream& is, Complex& complex)
{
	std::string temp;
	std::getline(is, temp, 'i');
	temp = deleteGap(temp);
	complex.setReal(stod(temp.substr(0, temp.find('+'))));
	temp = temp.substr(temp.find('+') + 1);
	complex.setImag(stod(temp));
	return is;
}

std::string Complex::deleteGap(std::string complex)
{
	std::string temp;
	for (int i = 0; i < complex.size(); i++)
	{
		if (complex.at(i) != ' ')
		{
			temp.append(1, complex.at(i));
		}
	}

	return temp;
}