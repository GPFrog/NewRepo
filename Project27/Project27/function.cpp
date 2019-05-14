#include "function.h"

void runFraction()
{
	int n, d;
	int n2, d2;
	Fraction f1, f2;
	std::string fractions;

	while (1)
	{
		if (readNumerDenom(n, d, n2, d2) == 0)
			break;
		f1.setNumer(n);
		f1.setDenom(d);
		f2.setNumer(n2);
		f2.setDenom(d2);
		std::cout << "입력된 값은 " << f1 << "과 " << f2 << std::endl << std::endl;

		std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
		std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
		std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
		std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	}
}

int readNumerDenom(int& n, int& d, int& n2, int& d2)
{
	std::string fraction;
	std::string fraction2;
	int divideLocation;

	std::cout << "두개의 분수를 입력하세요(n/d n2/d2의 형태로 입력 / 첫 분자를 0으로 입력시 종료) : ";
	std::getline(std::cin, fraction);

	fraction2 = fraction.substr(fraction.find(' ') + 1);
	fraction = fraction.substr(0, fraction.find(' '));

	divideLocation = fraction.find('/');


	if (!stoi(fraction.substr(0, divideLocation))) // 숫자를 03처럼 0으로 시작하게 넣을 수도 있기 때문에 분리 후 stoi를 통해 int로 변환 후 검사
		return 0;

	n = stoi(fraction.substr(0, divideLocation));
	d = stoi(fraction.substr(divideLocation + 1));

	n2 = stoi(fraction2.substr(0, divideLocation));
	d2 = stoi(fraction2.substr(divideLocation + 1));

	return 1;
}
//h