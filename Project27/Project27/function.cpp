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
		std::cout << "�Էµ� ���� " << f1 << "�� " << f2 << std::endl << std::endl;

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

	std::cout << "�ΰ��� �м��� �Է��ϼ���(n/d n2/d2�� ���·� �Է� / ù ���ڸ� 0���� �Է½� ����) : ";
	std::getline(std::cin, fraction);

	fraction2 = fraction.substr(fraction.find(' ') + 1);
	fraction = fraction.substr(0, fraction.find(' '));

	divideLocation = fraction.find('/');


	if (!stoi(fraction.substr(0, divideLocation))) // ���ڸ� 03ó�� 0���� �����ϰ� ���� ���� �ֱ� ������ �и� �� stoi�� ���� int�� ��ȯ �� �˻�
		return 0;

	n = stoi(fraction.substr(0, divideLocation));
	d = stoi(fraction.substr(divideLocation + 1));

	n2 = stoi(fraction2.substr(0, divideLocation));
	d2 = stoi(fraction2.substr(divideLocation + 1));

	return 1;
}
//h