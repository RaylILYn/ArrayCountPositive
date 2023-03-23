#include <iostream>
using namespace std;
const int SIZE = 100;

int main()
{
	setlocale(LC_ALL, "ru");
	int x[SIZE];
	int n, j = 0, positive = 0;
	cout << "Введите размер массива (макс.100): " << endl;
	cin >> n;
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (x[i] > 0)
		{
			positive++;
		}
	}
	cout << "Количество неотрицательных чисел: " << positive << endl;
	system("pause");
}