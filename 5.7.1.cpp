//. Задан массив целых чисел B(n). Найти
//• произведение отрицательных элементов с чётными индексами.
//• максимальный элемент среди элементов, которые кратны 3.
//Из данного массива и некоторого массива того же типа, но другой раз -
//мерности C(m), сформировать массив A, состоящий только из неотрица -
//тельных значений заданных массивов.Удалить из массива A первое число,
//кратное 17


#include <iostream>
#include <math.h>

using namespace std;

void DeleteElement(int* arr, int length, int pos)
{
	for (; pos<length - 1; ++pos) arr[pos] = arr[pos + 1];
}

int main()
{
	int *b, *c, *a, n = 0, n1 = 0, m = 0, m1 = 0, p = 1, count = 0, max = 0;
	cout << "The amount of elements in the array b="; cin >> n;
	b = new int[n];
	for (int i = 0; i<n; i++)
	{
		cout << "B[" << i << "]="; cin >> b[i];
		if (b[i] >= 0) n1++;
	}
	for (int i = 0; i<n; i += 2)
	{
		if (b[i]<0) p *= b[i];
	}
	for (int i = 0; i<n; i++)
	{
		if (b[i] % 3 == 0 && b[i]>max) max = b[i];
	}
	cout << "p=" << p << "\n";
	cout << "max=" << max << "\n";
	cout << "The amount of elements in the array c="; cin >> m;
	c = new int[m];
	for (int i = 0; i<m; i++)
	{
		cout << "C[" << i << "]="; cin >> c[i];
		if (c[i] >= 0) m1++;
	}
	a = new int[n1 + m1];
	for (int i = 0; i<n; i++)
	{
		if (b[i] >= 0) a[count++] = b[i];
	}
	for (int i = 0; i<n1 + m; i++)
	{
		if (c[i] >= 0) a[count++] = c[i];
	}
	cout << "Array A:\n";
	for (int i = 0; i<n1 + m1; i++) cout << a[i] << " ";
	for (int i = 0; i<n1 + m1; i++)
	{
		if (a[i] % 17 == 0)
		{
			DeleteElement(a, n1 + m1, i);
			break;
		}
	}
	cout << "\nNew array A:\n";
	for (int i = 0; i<n1 + m1 - 1; i++) cout << a[i] << " ";
	delete[] b;
	delete[] c;
	delete[] a;
	return 0;
}

