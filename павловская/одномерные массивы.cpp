// ConsoleApplication13.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
int main()
{
	int n;
	int first, last;
	int sum = 0;
	int sum2 = 0;
	int k = 0;
	cout << "Enter the number of array elements (n): ";
	cin >> n;
	float MyArray[n];
	for (int i = 0; i<n; i++)
	{
		cout << "Element nomber " << i << " : "; cin >> MyArray[i];
	}
	for (int i = 0; i<n; i++) //сумма отриц. эл-ов
	{
		if (i % 2 == 1)
		{
			sum = sum + MyArray[i];
		}
	}
	cout << "The sum of elements with odd numbers = " << sum << endl;
	for (int i = 0; i<n; i++) // сумма эл-ов, стоящих между крайними отрицательными элементами
	{
		if (MyArray[i] < 0)
		{
			first = i; //1-ое отриц. число
			break;
		}
	}
	for (int i = n - 1; i>first; i--)
	{
		if (MyArray[i] < 0)
		{
			last = i; //2-ое отриц. число
			break;
		}
	}
	for (int i = first + 1; i < last; i++)
	{
		sum2 = sum2 + MyArray[i];
	}
	cout << "The sum of the elements between negative numbers = " << sum2 << endl;
	
	for (int i = 0; i < n; i++)
	{
		if ((MyArray[i] <= 1) && (MyArray[i] >= -1))
		{

			k++; 
			for (int j = i + 1; j < n; j++)
			{
				MyArray[j - 1] = MyArray[j]; // если элемент  подходит - начинам сдвиг всех элементов справа на 1 влево
			}
		}
		cout << "New array: ";
		for (int i = n - 1; i > n - k; --i)

			MyArray[i] = 0; // обратный цикл, идем справа налево и обнуляем k самых последних элементов

	}
	for (int i = 0; i<n; i++)
	{
		cout << MyArray[i] << " "; //выводим обновленный массив
	}
	system("pause");
}
