//
#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int main()
{
	float x, y;
	printf("x=");
	scanf("%f", &x);
	y = (1 - log(fabs(x - cos(2 * x - pi)))) / (6 + pow(x, 4 * x - 1)) + pow(pow(x, 3), 1. / 5);
	printf("y=%.2f", y);
	return 0;
}
