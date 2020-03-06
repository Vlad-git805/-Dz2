#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "Header.h"

using namespace std;

void AddEvent()
{
	x++;
	cout << "Заголовок" << endl;
	cin.ignore();
	getline(cin, event[x].zagolovok);
	cout << "Опис" << endl;
	cin.ignore();
	getline(cin, event[x].opus);
	cout << "День" << endl;
	cin >> event[x].day;
	cout << "Години" << endl;
	cin >> event[x].hour;
	cout << "Рівень виконання" << endl;
	cin >> event[x].levelOfImportance;

}

void ListEvents()
{
	for (int i = x; i >= 0; i--)
	{
		cout << event[i].zagolovok << "\t"
			<< event[i].opus << event[i].day << "\t"
			<< event[i].hour << "\t"
			<< event[i].levelOfImportance << endl;
	}
}

