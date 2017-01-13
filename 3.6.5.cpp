// Вычислить сумму натуральных удвоенных чисел не превышающих 25


#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int sum = 0;
	for (int i = 1; i <= 25; i++)
	{
	cout << i * 2 << "\n"; sum += i * 2;
	}
	cout << "sum=" << sum;
	return 0;
}

