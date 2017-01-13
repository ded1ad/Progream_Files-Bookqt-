// Вывести на экран таблицу квадратов первых десяти целых чётных поло-
//жительных чисел.


#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	for (int i = 2; i <= 20; i += 2)
	{
		cout << i << "--" << i*i << endl;
	}
	return 0;
}

