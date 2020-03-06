#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>

using namespace std;

enum ZAVD
{
	ZAVD1 = 1, ZAVD2, ZAVD3, ZAVD4, EXIT = 0
};
const int podi9 = 100;
struct Event
{
	string zagolovok;
	string opus;
	string day;
	double hour;
	int levelOfImportance;

}event[podi9] = { "Спорт", "піти на тренування", "середа", 15.00, 2 };
int x = 0;


int main()
{
	setlocale(LC_ALL, "ru");
	/*cout << event[0].zagolovok << "\t" << event[0].opus << event[0].day << "\t" << event[0].hour << "\t" << event[0].levelOfImportance << endl;*/
	int operation = 0;
	do
	{
		cout << ZAVD1 << " - додати подію" << endl;
		cout << ZAVD2 << " - Список додій" << endl;
		cout << EXIT << " - exit" << endl;
		cout << "Введіть операцію" << endl;
		cin >> operation;
		switch (operation)
		{
		case ZAVD1:
		{
			cout << "Додати подію" << endl;
			AddEvent();
		}
		break;
		case ZAVD2:
		{
			cout << "Список подій" << endl;
			ListEvents();
		}
		break;
		case EXIT:
		{
			break;
		}
		break;
		default:
			break;
		}
	} while (operation != EXIT);

	system("pause");
	return 0;
}



/*
void SetColor(int text, int bg) {
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
enum ConsoleColor {
Black = 0,
Blue = 1,
Green = 2,
Cyan = 3,
Red = 4,
Magenta = 5,
Brown = 6,
LightGray = 7,
DarkGray = 8,
LightBlue = 9,
LightGreen = 10,
LightCyan = 11,
LightRed = 12,
LightMagenta = 13,
Yellow = 14,
White = 15
};
SetColor(2, 0);
#include<cstdlib>
#include <stdio.h>
#include<windows.h>
#include <conio.h>
*/