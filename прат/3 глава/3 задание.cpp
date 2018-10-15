// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << " введите значение широты  в градусах для переменной а";
	cin >> a;
	cout << "введите значение широты в минутах для переменной b ";
	cin >> b;
	cout << " введите значение широты  в секундах для переменной с";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h;
    return 0;
}

