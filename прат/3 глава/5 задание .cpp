// ConsoleApplication23.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "rus");
	int km, l;
	int result;
	cout << " ������� ������� �������� ��";
	cin >> km;
	cout << " ������� ������� ������ �������� �������������";
	cin >> l;
	result = km / l;
	cout << result << "  ������ ��������� �� 1 �� ";

    return 0;
}

