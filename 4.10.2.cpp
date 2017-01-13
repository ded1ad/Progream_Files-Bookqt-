//Заданы два числа — A и B, первое в системе счисления с основанием p, второе в
//системе счисления с основанием q.Вычислить значение C по указанной формуле
//и вывести его на экран в десятичной системе счисления и системе счисления с
//основанием r



#include <iostream>
#include <math.h>

using namespace std;

int toDec(int x, int base)
{
	int res = 0;
	int i = 0;
	while (x)
	{
		int f = static_cast<int>((x % 10)*pow(static_cast<double>(base), static_cast<double>(i)));
		res += f;
		x /= 10;
		++i;
	}
	return res;
}

int toQuinary(unsigned int n)
{
	int t = 0, d = 1;
	while (n)
	{
		t += (n % 5)*d;
		n = n / 5;
		d = d * 10;
	}
	return t;
}

int C(int p, int q)
{
	int c;
	c = pow((2 * p - 3 * q), 2);
	return c;
}

int main()
{
	int p, q, c;
	cout << "Input A>>";
	cin >> p;
	p = toDec(p, 8);
	cout << "Input B>>";
	cin >> q;
	q = toDec(q, 2);
	cout << "C(Dec)=" << C(p, q) << endl;
	c = toQuinary(C(p, q));
	cout << "C(Quinary)=" << c;
	return 0;
}

