// ConsoleApplication23.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	
	int a;
	float b;
	cout << "������� �������� � ������ ���  ���������� �";
	cin >> a;
	b = (a / 12);
	cout << a % 12 << endl;
	cout << b << endl;
    return 0;
}

