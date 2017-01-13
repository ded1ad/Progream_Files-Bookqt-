//. Заданы три точки A(x1,y1), B(x2,y2), C(x3,y3). Определить, какая из точек
//B или C наименее удалена от точки A



#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	float x1, x2, x3, y1, y2, y3, d1, d2;
	cout << "A:\n x1=";
	cin >> x1;
	cout << " y1=";
	cin >> y1;
	cout << "B:\n x2=";
	cin >> x2;
	cout << " y2=";
	cin >> y2;
	cout << "C:\n x3=";
	cin >> x3;
	cout << " y3=";
	cin >> y3;
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	if (d1<d2) cout << "B is closer to A than C";
	else if (d2<d1) cout << "C is closer to A than B";
	else cout << "B and C are closer from A";
	return 0;
}