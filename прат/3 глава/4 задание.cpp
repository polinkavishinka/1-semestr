// ConsoleApplication23.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	int long  min, sec, sec2, day;
	cout << " введите целое значение sec";
	cin >> sec;
	day = sec / 86400;
	min = (sec - day * 86400) / 60;
	sec2 = sec - min * 60 - day * 86400;
	cout << sec << " секунды =" << day << " дней" << min << " минут" << sec2 << " секунд";
    return 0;
}

