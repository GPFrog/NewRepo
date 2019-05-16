#include "BigINT.h"

using namespace std;

int main()
{
	while (1)
	{
		BigINT num1, num2;
		cout << "두개의 정수를 입력하세요 (종료하려면0 0) : ";
		cin >> num1 >> num2;
		cout << "입력한 값은 " << num1 << ", " << num2 << "이다." << endl;
		BigINT num3;
		num3 = num1 + num2;
		cout << num1 << "+" << num2 << " = " << endl;
		cout << "합은 " << num3 << endl;
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