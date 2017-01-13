int main()
{
	int i, j, n, m, mas[10][10];
	cout << "ввдите любое n>4" << endl;
	cin >> n;//n>4
	cout << "введите любое m>3" << endl;
	cin >> m;//m>3
	max = -32768;
	min = 32767;
	cout << "введите элементы массива " << endl;
	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
		{
			cin >> mas[i][j];
			if (mas[i][j]<min) min = mas[i][j];
			if (mas[i][j]>max) max = mas[i][j];
		}
	cout << "матрица" << endl;
	for (i = 0; i<n; i++)
	{
		cout << endl;
		for (j = 0; j<m; j++)
			cout << mas[i][j] << " ";
	}
	
}