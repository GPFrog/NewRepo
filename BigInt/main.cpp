#include "BigINT.h"

using namespace std;

int main()
{
	while (1)
	{
		BigINT num1, num2;
		cout << "�ΰ��� ������ �Է��ϼ��� (�����Ϸ���0 0) : ";
		cin >> num1 >> num2;
		cout << "�Է��� ���� " << num1 << ", " << num2 << "�̴�." << endl;
		BigINT num3;
		num3 = num1 + num2;
		cout << num1 << "+" << num2 << " = " << endl;
		cout << "���� " << num3 << endl;
		/*cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
		cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
		cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
		cout << num1 << "%" << num2 << " = " << num1 % num2 << endl;
		cout << num1 << "==" << num2 << " = " << num1 == num2 << endl;
		cout << num1 << "!=" << num2 << " = " << num1 != num2 << endl;
		cout << num1 << "<" << num2 << " = " << num1 < num2 << endl;
		cout << num1 << "<=" << num2 << " = " << num1 <= num2 << endl;
		cout << num1 << ">" << num2 << " = " << num1 > num2 << endl;
		cout << num1 << ">=" << num2 << " = " << num1 >= num2 << endl << endl;
		*/
	}

	return 0;
}