// ConsoleApplication1.cpp : Defines the entry point for the console application.
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
	double b;
	cout << "Введите b ";
	cin >> b;
	const double e = 2.718;
	double xy = x*y;
	double xysum = x + y;
	double c = atan(x) - (3 * pow(e, xy)) / 5 + (0.5*fabs(xysum)) / pow(xysum, b);
	cout << "С равно = " << c << endl;
	system("pause");
	return 0;
}

