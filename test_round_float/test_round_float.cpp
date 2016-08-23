// test_round_float.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

double round(double number)
{
    return number < 0.0 ? ceil(number - 0.5) : floor(number + 0.5);
}

int _tmain(int argc, _TCHAR* argv[])
{
	float number1 = -1236;
	float number2 = 8;
	int number3 = (int)round(number1 / number2);
	cout << number3 << endl;
	cout << number1/number2 << endl;
	return 0;
}
