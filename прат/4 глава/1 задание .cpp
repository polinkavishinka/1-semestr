﻿// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		setlocale(0, "rus");
		const int ArSize = 20;
		char Fname[ArSize];
		char Lname[ArSize];
		int age;
		char bit;
		cout << "как вас зовут? " << endl;
		cin >> Lname;
		cout << "какая у вас фамилия?" << endl;
		cin >> Fname;
		cout << "какую буквенную оценку вы заслуживаете(A,B,C)? " << endl;
		cin >> bit;
		cout << "сколько вам лет ? " << endl;
		cin >> age;
		cout << "имя и фамилия: " << Lname << "     " << Fname << endl;
		cout << "возраст: " << age << endl;
		switch (bit)
		{
		case 'A':
			cout << "Grade B " << endl;
			break;
		case 'B':
			cout << "Grade C" << endl;
			break;
		case 'C':
			cout << "Grade D" << endl;
			break;
		default: cout << "wrong" << endl;
		}
		
		system("pause");

    return 0;
}

