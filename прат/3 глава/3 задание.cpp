// ConsoleApplication23.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	float a, b, c;
	cout << "введите значение широты  в градусах для переменной а ";
	cin >> a;
	cout << " введите значение широты  в градусах для переменной b";
	cin >> b;
	cout << "введите значение широты  в градусах для переменной c";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h;
    return 0;
}

