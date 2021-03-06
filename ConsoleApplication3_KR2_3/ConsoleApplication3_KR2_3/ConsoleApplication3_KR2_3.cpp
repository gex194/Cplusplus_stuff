// ConsoleApplication3_KR2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cmath>;
#define _USE_MATH_DEFINES
#include <locale.h>;


int main()
{
	const double e = 2.718;
	const double pi = 3.14;
	cout << "     x    |     y     " << endl;
	cout << "----------|-----------" << left << endl;
	double y;
	for (double x = -(pi / 8); x < (pi / 8); x += pi / 40) {
		if (x < 0) {
			y = sin(x)*log(fabs(tan(x)));
		}
		else if (x == 0) {
			y = 0;
		}
		else if (x > 0) {
			log(fabs(tan(x / 2))) - cos(x)*log(fabs(tan(x)));
		}
		cout.width(10);
		cout.precision(10);
		cout << x << "|" << y << endl;
	}
	system("pause");
    return 0;
}

