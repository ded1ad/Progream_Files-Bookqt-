//Поступает последовательность целых положительных чисел, 0 — конец по-
//следовательности.Определить, в каком из чисел больше всего цифр



#include <iostream>
#include <math.h>

using namespace std;

int Digits(int x)
{
	int i = 0;
	while (x>0)
	{
		++i;
		x /= 10;

	}
	return i;
}

int Largest()
{
	int tmp = 1, big = 0, big1 = 0;
	while (tmp)
	{
		cout << "Input >>";
		cin >> tmp;
		if (Digits(tmp)>big)
		{
			big = Digits(tmp);
			big1 = tmp;
		}
	}
	return big1;
}

int main()
{
	cout << "The largest number is " << Largest();
	return 0;
}
