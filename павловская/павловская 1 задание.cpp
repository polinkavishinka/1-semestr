// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		setlocale(0, "rus");
		float a, b, c, xn, x, xk, f, dx;
		cout << "Введите a,b,c,xn,xk,dx" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> xn;
		cin >> xk;
		cin >> dx;

		for (x = xn; x <= xk; x = x + dx)
		{
			if (c<0 && x != 0)
			{
				f = -a*x - c;
			}
			if (c>0 && x == 0)
			{
				f = (x - a) / -c;
			}
			else
			{
				f = (b*x) / (c - a);
			}
			cout << "При х = " << x << endl << " Функция F принемает значение  " << f << endl;
		}
		system("pause");

    return 0;
}

