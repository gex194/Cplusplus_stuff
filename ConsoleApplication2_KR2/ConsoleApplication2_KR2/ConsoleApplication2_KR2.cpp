// ConsoleApplication2_KR2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cmath>;
#include <locale.h>;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	cout << "Введите Х ";
	cin >> x;
	double y;
	cout << "Введите Y ";
	cin >> y;
	double c;
	double sumxy = x + y;
	double minusyx = y - x;
	if (x - y == 0) {
		c = pow(x, 2) + pow(y, 2) + sin(x);
		cout << "C = " << c << endl;
		system("pause");
	}
	else if (x - y > 0) {
		c = pow(sumxy, 2) + cos(x);
		cout << "C = " << c << endl;
		system("pause");
	}
	else if (x - y < 0) {
		c = pow(minusyx, 2) + tan(x);
		cout << "C = " << c << endl;
		system("pause");
	}
    return 0;
}

