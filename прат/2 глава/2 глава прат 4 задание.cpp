// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void text()
{


	float a, d;
	cout << "введите значение а в фаренгейтах" << endl;
	cin >> a;
	cout << "значение в фаренгейтах" << endl;
	d = (1.8*a)+32;
	cout << d << "значение в цельсиях";
	system("pause");
}

int main()
{
	setlocale(0, "rus");
	text();
	
    return 0;
}

