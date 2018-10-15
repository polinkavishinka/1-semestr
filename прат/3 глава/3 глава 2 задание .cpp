// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	float bmi;
	float s, c;

	cin >> a >> b;
	s = a * 12;
	c = b / 2.2;
	bmi = c / s *s;
	cout << bmi;
    return 0;
}

