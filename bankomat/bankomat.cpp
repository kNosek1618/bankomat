#include "pch.h"
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int liczba, PIN, proba = 1, pozostalo = 4;

string nic;

int main()
{
	cout << "Witaj w naszym banku!" << endl;
	cout << endl << "wloz karte i poczekaj 10 sekund:" << endl;
	Sleep(2000);
	for (int i = 1; i <= 10; i++)
	{
		Sleep(1000);
		system("cls");
		cout << "------- " << i << " ------" << endl;
	}



	system("cls");
	cout << "Podaj PIN:";
	cin >> liczba;
	PIN = 1618;
	if (PIN == liczba)
	{
		cout << endl << "    !POPRAWNY PIN!" << endl;
	}

	while ((proba <= 3) && (liczba != PIN))
	{
		proba++;
		pozostalo--;

		if (PIN != liczba)
			cout << "niepoprawny PIN, pozostaly " << pozostalo << " proby:";
		cin >> liczba;
		if (PIN == liczba)
			cout << endl << "    !POPRAWNY PIN!" << endl;
	}
	if ((proba == 4) && (liczba != PIN))
	{
		cout << endl << "    !ZABLOKOWALES KARTE!" << endl;
	}



	
}