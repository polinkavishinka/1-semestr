// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	float l, km, gl, mil;
	float result;
	cout << " введите сколько пройдено км";
	cin >> km;
	cout << " введите сколько литров беннзина израсходовано";
	cin >> l;
	result = (km / 1.6) / (l / 3.75);
	cout << result << " мили на галоны";


    return 0;
}

