// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	double au, lu;
	cout << "Введите количество световых лет: " << endl;
	cin >> lu; //ввод количества световых лет
	au = convert(lu);
	cout << "световых лет = " << lu << endl;
	cout << "астрономических единиц = " << au << endl;
	system("pause");
	return 0;
}

double convert(double lu)
{
	return lu * 63240;
}

