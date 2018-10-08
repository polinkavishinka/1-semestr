// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	/*
	int a;//3 тема 1 задание 
	float b;
	cout << "введите значение в дюймах для  переменной а";
	cin >> a;
	b = (a / 12);
	cout << a % 12 << endl;
	cout << b << endl;

	*/

/*
	int a, b ;// 3 тема 2 задание 
	float bmi;
	float s,c;
	
	cin >> a >> b;
	s = a * 12;
	c = b/2.2;
	bmi =c / s *s;
	cout << bmi;
	*/
	

	/*
	float a, b, c;// 3 тема 3 задание
	cout << " введите значение широты  в градусах для переменной а";
	cin >> a;
	cout << "введите значение широты в минутах для переменной b ";
	cin >> b;
	cout << " введите значение широты  в секундах для переменной с";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h;
	*/

/*
	int long  min, sec,sec2, day;//3 тема 4 запдание 
	cout << " введите целое значение sec";
	cin >> sec;
	day = sec / 86400;
	min = (sec - day * 86400)/60;
	sec2 = sec - min * 60 - day * 86400;

	cout << sec << " секунды =" << day << " дней" << min << " минут" << sec2 << " секунд";

	*/

	/*
	int km, l;// 3 тема 5 задание 
	int result;
	cout << " введите сколько пройдено км";
	cin >> km;
	cout << " введите сколько литров беннзина израсходовано";
	cin >>l;
	result = km/l;
	cout << result << "  литров потрачено на 1 км ";

	*/

	float l, km, gl, mil;// 3ГЛАВА 6 ЗАДАНИЕ
	float result;
	cout << " введите сколько пройдено км";
	cin >> km;
	cout << " введите сколько литров беннзина израсходовано";
	cin >> l;
	result = (km / 1.6) / (l / 3.75);
	cout << result << " мили на галоны";


    return 0;
}