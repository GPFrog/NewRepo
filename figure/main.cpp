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
		cout << "1. 도형 추가" << endl;
		cout << "2. 도형 변경" << endl;
		cout << "3. 도형 삭제" << endl;
		cout << "4. 종료" << endl;
		cout << "5. 명단 보기" << endl;
		cout << "메뉴를 선택하여주십시오." << endl;
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
			cout << "잘못된 입력" << endl;
			break;
		}
	}
	return 0;
}