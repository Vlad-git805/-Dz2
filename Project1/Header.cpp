#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include "Header.h"

using namespace std;

void AddEvent()
{
	x++;
	cout << "���������" << endl;
	cin.ignore();
	getline(cin, event[x].zagolovok);
	cout << "����" << endl;
	cin.ignore();
	getline(cin, event[x].opus);
	cout << "����" << endl;
	cin >> event[x].day;
	cout << "������" << endl;
	cin >> event[x].hour;
	cout << "г���� ���������" << endl;
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

