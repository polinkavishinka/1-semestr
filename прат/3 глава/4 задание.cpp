// ConsoleApplication23.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	int long  min, sec, sec2, day;
	cout << " ������� ����� �������� sec";
	cin >> sec;
	day = sec / 86400;
	min = (sec - day * 86400) / 60;
	sec2 = sec - min * 60 - day * 86400;
	cout << sec << " ������� =" << day << " ����" << min << " �����" << sec2 << " ������";
    return 0;
}

