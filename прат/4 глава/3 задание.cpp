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
	candyBar candyArray[3];
	
	cout << "Введите название 1-й коробки конфет: ";
	cin >> candyArray[0].name;
	cout << "Введите вес 1-й коробки конфет: ";
	cin >> candyArray[0].weight;
	cout << "Введите количество калорий в 1-й коробке конфет: ";
	cin >> candyArray[0].kcal;
	cout << endl;

	cout << "Введите название 2-й коробки конфет: ";
	cin >> candyArray[1].name;
	cout << "Введите вес 2-й коробки конфет: ";
	cin >> candyArray[1].weight;
	cout << "Введите количество калорий в 2-й коробке конфет: ";
	cin >> candyArray[1].kcal;
	cout << endl;

	cout << "Введите название 3-й коробки конфет: ";
	cin >> candyArray[2].name;
	cout << "Введите вес 3-й коробки конфет: ";
	cin >> candyArray[2].weight;
	cout << "Введите количество калорий в 3-й коробке конфет: ";
	cin >> candyArray[2].kcal;
	cout << endl;
	cout << "******************************************************" << endl;

	cout << "Название 1-й коробки конфет: " << candyArray[0].name;
	cout << endl;
	cout << "Вес 1-й коробки конфет: " << candyArray[0].weight;
	cout << endl;
	cout << "Количество калорий в 1-й коробке конфет: " << candyArray[0].kcal;
	cout << endl;
	cout << endl;

	cout << "Название 2-й коробки конфет: " << candyArray[1].name;
	cout << endl;
	cout << "Вес 2-й коробки конфет: " << candyArray[1].weight;
	cout << endl;
	cout << "Количество калорий в 2-й коробке конфет: " << candyArray[1].kcal;
	cout << endl;
	cout << endl;

	cout << "Название 3-й коробки конфет: " << candyArray[2].name;
	cout << endl;
	cout << "Вес 3-й коробки конфет: " << candyArray[2].weight;
	cout << endl;
	cout << "Количество калорий в 3-й коробке конфет: " << candyArray[2].kcal;
	cout << endl;
	cout << endl;
	cout << "******************************************************" << endl;
		system("pause");

    return 0;
}

