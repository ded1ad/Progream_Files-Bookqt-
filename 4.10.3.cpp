//Разработать программу на языке C++ для вычисления одного из корней уравнения f(x) = 0 методами, указанными в задании.Для решения задачи предварительно определить интервал изоляции корня графическим методом.Вычисленияпроводить с точностью ε = 10−4
//Оценить степень точности путём подсчёта количества итераций, выполненных для достижения заданной точности
//(метод половинного деления, метод хорд)



#include <iostream>
#include <math.h>

using namespace std;

double func(double x)
{
	return 0.8*x*x - sin(10 * x);
}

void find(double infinum, double supremum, double epsilon)
{
	int n = 0;
	while (fabs(supremum - infinum) > epsilon)
	{
		infinum = supremum - (supremum - infinum) * func(supremum) / (func(
			supremum) - func(infinum));
		supremum = infinum - (infinum - supremum) * func(infinum) / (func(
			infinum) - func(supremum));
		n++;
	}
	cout << "Root=" << supremum << endl;
	cout << "The amount of iterations=" << n << endl;
}

int main()
{
	int n = 0, m;
	double a, b, c;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "Choose the preferred method: (1)bisection, (2)chord\n"; cin >> m;
	switch (m)
	{
	case 1:
	{
		do
		{
			c = (a + b) / 2;
			if (func(c)*func(a) <= 0) b = c;
			else a = c;
			n++;
		} while (abs(a - b) >= 0.0001);
		cout << "Root=" << c << endl;
		cout << "The amount of iterations=" << n << endl;
		break;
	}
	case 2:
	{
		find(a, b, 0.0001);
		break;
	}
	default: break;
	}
	return 0;
}

