// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	int km, l;
	int result;
	cout << " введите сколько пройдено км";
	cin >> km;
	cout << " введите сколько литров беннзина израсходовано";
	cin >> l;
	result = km / l;
	cout << result << "  литров потрачено на 1 км ";

    return 0;
}

