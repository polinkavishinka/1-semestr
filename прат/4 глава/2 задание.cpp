// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>


using namespace std;
struct candyBar
{
	string name;
	double weight;
	int kcal;
};
int main()
{
		setlocale(0, "rus");
		
		candyBar snack
		{
			"Mocha Munch",
			2.3,
			350
		};

		cout << "The name of these chocolates: " << snack.name << endl;
		cout << endl;

		cout << "The weight of these chocolates: " << snack.weight << endl;
		cout << endl;

		cout << "The kcal of these chocolates: " << snack.kcal << endl;
		cout << endl;

		system("pause");

    return 0;
}

