// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include <iostream>

использование пространства имен std;

int main()
{
	float a, b, c, x, f, dx, x1, x2;
	cout << "Введите a:"; CIN >> а;
	cout << "Введите b:"; CIN >> б;
	cout << "Введите c:"; CIN >> с;
	cout << "Введите x1:"; CIN >> x1;
	cout << "Введите x2:"; CIN >> x2;
	cout << "Введите dx:"; CIN >> дх;
	для(x = x1; x <x2; x + = dx)
	{
		если(c <0 && x!= 0)
		{
			f = -a * x - c;
			if ((int(a) || int(b) || int(c)) == 0)
			{
				f = int(f);
			}
			cout << "x =" << x << "f =" << f << endl;
		}
		если(c> 0 && x == 0)
		{
			f = (x - a) / (-c);
			if ((int(a) || int(b) || int(c)) == 0)
			{
				f = int(f);
			}
			cout << "x =" << x << "f =" << f << endl;
		}
		еще
		{
			f = (b * x) / (ca);
		if ((int(a) || int(b) || int(c)) == 0)
		{
			f = int(f);
		}
		cout << "x =" << x << "f =" << f << endl;
		}
	}
}
