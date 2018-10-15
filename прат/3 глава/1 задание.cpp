// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	
	int a;
	float b;
	cout << "введите значение в дюймах для  переменной а";
	cin >> a;
	b = (a / 12);
	cout << a % 12 << endl;
	cout << b << endl;
    return 0;
}

