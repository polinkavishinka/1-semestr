// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		setlocale(0, "rus");
		const int m = 3;

		int mass[m][m] =
		{ 1, 3, 6,
		 -3, 4, 2,
		  2, 7, 4 };

		int k[m] = { 0 };
		int n = 1;



		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<m; j++)
			{
				if (mass[i][j] < 0)
				{
					j = m;
					n = 1;
				}
				n *= mass[i][j];
			}
			k[i] = n;
		}
		for (int i = 0; i < m; i++)
		{
			cout << k[i] << " ";
			cout << "\n";
		}
		system("pause");

    return 0;
}

