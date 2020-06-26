#include <iostream>

using namespace std;

void show_matr(int matr[5][3])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << "\n";
	}
}

void sort_two_mass(int matr[5][3], int M)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matr[i][j] > M)
			{
				matr[i][j] = M;
			}
			else if (matr[i][j] < -M)
			{
				matr[i][j] = -M;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Выполнил Котов А.А. УМЛ-112\n";
	cout << "Программа для обработки матрицы\n";

	int matr[5][3] = {{4, 7, 8}, {9, 66, -1}, {5, -5, 0}, {3, -3, 30}, {1, 1, 1}};

	cout << "Исходная матрица: \n";
	show_matr(matr);

	cout << "Введите значение для отсечения M: ";
	int m;
	cin >> m;

	sort_two_mass(matr, m);

	cout << "Отформатированная матрица: \n";
	show_matr(matr);
	system("pause");
}
