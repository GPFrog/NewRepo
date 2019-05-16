#include "Complex.h"

using namespace std;

int main()
{
	Complex c1, c2;
	while (1) 
	{
		cout << "두개의 복소수를 실수와 허수 순으로 입력하세요(ex.1+2i 3+4i / 종료하려면 첫번째 복소수를0+0i로 입력) : ";
		cin >> c1;
		cin >> c2;
		if (!c1.getImag() && !c1.getReal())
			break;
		cout << c1 << "+" << c2 << " = " << c1 + c2 << endl; cout << c1 << "-" << c2 << " = " << c1 - c2 << endl; cout << c1 << "*" << c2 << " = " << c1 * c2 << endl << endl;
	}

	return 0;
}