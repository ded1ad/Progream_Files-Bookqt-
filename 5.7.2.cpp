//Заданы массивы целых положительных чисел. X(n) — в двоичной системе
//счисления, а Y(k) — в восьмеричной.Все числа из массивов X и Y пере -
//писать в массив десятичных чисел Z.В массиве Z найти пять наибольших
//простых числа.Удалить из массива Z все составные числа




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

bool IsPrime(int n)
{
	if (n == 2) return true;
	if (n < 2 || n % 2 == 0) return false;
	for (int i = 3; i*i <= n; i += 2)
		if (n % i == 0) return false;
	return true;
}

int main()
{
	int *n, *k, *z, x = 0, y = 0, count = 0, count1 = 0;
	cout << "The amount of elements in array n="; 
	cin >> x;
	n = new int[x];
	for (int i = 0; i<x; i++)
	{
		cout << "N[" << i << "]=";
		cin >> n[i];
	}
	cout << "The amount of elements in array a=";
	cin >> y;
	k = new int[y];
	for (int i = 0; i<y; i++)
	{
		cout << "K[" << i << "]=";
		cin >> k[i];
	}
	z = new int[x + y];
	for (int i = 0; i<x; i++)
	{
		z[i] = toDec(n[i], 2);
	}
	for (int i = x; i<x + y; i++)
	{
		z[i] = toDec(k[count++], 8);
	}
	cout << "Array Z:\n";
	for (int i = 0; i<x + y; i++) cout << z[i] << " ";
	int i = 0;
	cout << "\nSimple numbers (up to 5): ";
	while (count1 != 5 && i<x + y)
	{
		if (IsPrime(z[i]))
		{
			count1++;
			cout << z[i] << " ";
		}
		i++;
	}
	int count2 = x + y;
	for (int i = 0; i<x + y; ++i)
	{
		if (!IsPrime(z[i]))
		{
			int size = sizeof(int)*(count2 - (i + 1));
			if (!size)
			{
				--count2;
				break;
			}
			memcpy(&z[i], &z[i + 1], size);
			--i;
			--count2;
		}
	}
	cout << "\nNew array Z:\n";
	for (int i = 0; i<count2; i++) cout << z[i] << " ";
	delete[] n;
	delete[] k;
	delete[] z;
	return 0;
}
