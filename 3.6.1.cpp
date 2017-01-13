#include <QCoreApplication>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	cout << "a=";
	cin >> x;
	if (x <= 1)y = pow(0.5, x);
	else if (x>1 && x<4)y = 2;
	else y = 5;
	cout << "y=" << y << endl;
	return 0;
}