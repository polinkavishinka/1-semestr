// ConsoleApplication23.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << " ������� �������� ������  � �������� ��� ���������� �";
	cin >> a;
	cout << "������� �������� ������ � ������� ��� ���������� b ";
	cin >> b;
	cout << " ������� �������� ������  � �������� ��� ���������� �";
	cin >> c;
	float h = (a + b / 60 + c / 3600);
	cout << h;
    return 0;
}

