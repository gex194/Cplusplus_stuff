// ConsoleApplication4_KR2_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cmath";
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <locale.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[] )
{
	setlocale(LC_ALL, "Russian");
	int c;
	char symbol[8], ch;
	const char *vowel = "eyuioaEYUIOA";
	cout << "Введите 8 символов: ";
	const int size_mass = 8;
	for (int count = 0; count < size_mass;) {
		c = _getch();
		if(isalpha(c)) {
			ch = static_cast<char>(c);
			symbol[count++] = ch;
			cout << ch << ' ';
		}
	}
	cout << endl << oct;
	for (int i = 0; i < size_mass; i++) {
		if (strchr(vowel, symbol[i])) {
			ch = static_cast<char>(symbol[i] & 0xFC);
		}
		else {
			ch = static_cast<char>(symbol[i] | 0x0A);
		}
		cout << symbol[i] << '\t' << static_cast<int>(symbol[i]) << "   |   " << ch << '\t' << static_cast<int>(ch) << endl;
	}
	system("pause");
    return 0;
}

