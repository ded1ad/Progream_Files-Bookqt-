//Разработать программу на языке С++. Даны вещественные числа x и y. Опре-
//делить, принадлежит ли точка с координатами(x; y) заштрихованной области.
//Варианты заданий представлены на рис. 3.61–3.85.


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
 cin >> y;
	if (y <= 0 && y >= -4 * x - 12 && y >= -4 && y >= 4 * x - 12)
		cout << "In the region" << endl;
	else
		cout << "Not in the region" << endl;
	return 0;
}
