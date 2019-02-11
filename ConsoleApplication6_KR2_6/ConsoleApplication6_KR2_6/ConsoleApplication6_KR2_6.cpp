// ConsoleApplication6_KR2_6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int calculate(std::array<int,50> arr) {
	int averageSum = 0;
	int sum = 0;
	for (int i = 0; i < arr.size() - 1;i++)
	{
	 sum += arr[i]; 
	}
	averageSum = sum/arr.size();
	return averageSum;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::array<int, 50> randomArr;
	for (int i = 0; i< randomArr.size() - 1; i++){
		randomArr[i] = (rand() &100)+1;
	}

	calculate(randomArr);
	return 0;
}

