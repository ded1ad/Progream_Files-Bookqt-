i#include<iostream.h>
#include<conio.h>

int main()
{
	int i, j, n, m, min, max, mas[10][10];
	cout << "kol-Bo ctrok n>4" << endl;
	cin >> n;
	cout << "kol-Bo ctol6cov m>3" << endl;
	cin >> m;
	max = -32768;
	min = 32767;
	cout << "BBedute Elementy MaccuBa " << endl;
	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
		{
			cin >> mas[i][j];
			if (mas[i][j]<min) min = mas[i][j];
			if (mas[i][j]>max) max = mas[i][j];
		}
	cout << "Matrica" << endl;
	for (i = 0; i<n; i++)
	{
		cout << endl;
		for (j = 0; j<m; j++)
			cout << mas[i][j] << " ";
	}
	cout << endl << "max=" << max;
	cout << endl << "min=" << min;
	getch();
}