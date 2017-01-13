//Дано двузначное число. Вывести число, полученное при перестановке цифр
//исходного числа.

#include <QCoreApplication>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	int a;
	cout << "a=";
	cin >> a;
	a = a % 10 * 10 + a / 10;
	cout << "Reversed=" << a << endl;
	return 0;

}
