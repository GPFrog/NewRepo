#include "FigureList.h"
using namespace std;

int main()
{
	system("mode con lines=40 cols=120");
	FigureList list(8);
	int userInput;
	while (1)
	{
		cout << "Menu" << endl;
		cout << "1. ���� �߰�" << endl;
		cout << "2. ���� ����" << endl;
		cout << "3. ���� ����" << endl;
		cout << "4. ����" << endl;
		cout << "5. ��� ����" << endl;
		cout << "�޴��� �����Ͽ��ֽʽÿ�." << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			list.addFigure();
			list.printFigure();
			break;
		case 2:
			list.changeFigure();
			break;
		case 3:
			list.deleteFigure();
			break;
		case 4:
			return 0;
			break;
		case 5:
			list.showFigureName();
			break;	
		default:
			cout << "�߸��� �Է�" << endl;
			break;
		}
	}
	return 0;
}