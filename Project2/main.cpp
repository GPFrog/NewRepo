#include "Complex.h"

using namespace std;

int main()
{
	Complex c1, c2;
	while (1) 
	{
		cout << "�ΰ��� ���Ҽ��� �Ǽ��� ��� ������ �Է��ϼ���(ex.1+2i 3+4i / �����Ϸ��� ù��° ���Ҽ���0+0i�� �Է�) : ";
		cin >> c1;
		cin >> c2;
		if (!c1.getImag() && !c1.getReal())
			break;
		cout << c1 << "+" << c2 << " = " << c1 + c2 << endl; cout << c1 << "-" << c2 << " = " << c1 - c2 << endl; cout << c1 << "*" << c2 << " = " << c1 * c2 << endl << endl;
	}

	return 0;
}