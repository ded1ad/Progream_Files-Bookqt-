// Дана длина окружности L. Найти радиус окружности R и площадь круга S.

#include <QCoreApplication>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 float L,R,S,pi;
 scanf("%f%f", &L, &pi);
 R=L/2*pi; S:=pi*(R*R);
 printf("R=%f, S=%f", R, S);
}

