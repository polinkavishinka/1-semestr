// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

int main()
{
	float a, b, c, x, f, dx, x1, x2;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	cout << "Enter x1: "; cin >> x1;
	cout << "Enter x2: "; cin >> x2;
	cout << "Enter dx: "; cin >> dx;
	for (x = x1; x < x2; x += dx)
	{
		if (c<0 && x != 0)
		{
			f = -a*x - c;
			if ((int(a) || int(b) || int(c)) == 0)
			{
				f = int(f);
			}
			cout << "x = " << x << " f = " << f << endl;
		}
		if (c>0 && x == 0)
		{
			f = (x - a) / (-c);
			if ((int(a) || int(b) || int(c)) == 0)
			{
				f = int(f);
			}
			cout << "x = " << x << " f = " << f << endl;
		}
		else
		{
			f = (b*x) / (c - a);
			if ((int(a) || int(b) || int(c)) == 0)
			{
				f = int(f);
			}
			cout << "x = " << x << " f = " << f << endl;
		}
	}
}
