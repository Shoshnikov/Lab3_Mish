#include <iostream>
#include <locale.h>

using namespace std;

int CorrectInput(int& value);

int main()
{
	setlocale(LC_ALL,"RUS");
	int matr[100][50];
	int arr[50];
	int n, m, k;
	setlocale(LC_ALL, "RUS");
	cout << "Введите количество строк и столбцов через пробел\n";
	cin >> n >> m;
	cout << "Вводите числа...\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			CorrectInput(matr[i][j]);
	cout << "Введите чсило k\n";
	cin >> k;
	for (int i = 0; i < n; i++)
		arr[i] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (matr[i][j] % k == 0)
				arr[i] += matr[i][j];
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << endl;
}

int CorrectInput(int& value)
{
	char fail;
	cin >> value;
	while (cin.fail())
	{
		cout << "Данные некорректны\n";
		cin.clear();
		cin >> fail;
		cin >> value;
	}
	return value;
}
