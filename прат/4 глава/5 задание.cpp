// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>


using namespace std;

struct pizza
{
	double diameter;
	string name;
	double weight;
};

int main()
{
	setlocale(0, "rus");
	pizza *forExample = new pizza;



	cout << "Введите название компании-производителя: ";
	cin >> forExample->name; 
	cout << "Введите диаметр пиццы: ";
	cin >> forExample->diameter;
	
	cout << "Введите вес пиццы: ";
	cin >> forExample->weight;
	cout << endl;
	cout << endl;
	cout << "******************************************************" << endl;
	cout << "Название компании-производителя: " << forExample->name;
	cout << endl;
	cout << "Диаметр пиццы: " << forExample->diameter;
	cout << endl;
	cout << "Вес пиццы: " << forExample->weight;
	cout << endl;
	cout << endl;
	cout << "******************************************************" << endl;
	delete forExample;
	
		system("pause");

    return 0;
}

