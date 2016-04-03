#include <iostream>
#include <clocale>
#include <ctime>
#include <cmath>
using namespace std;
int const N = 3;
void showtask() {
	cout << "71. Симметричную матрицу А(N,N), заданную верхним треугольником в виде одномерного массива относительно главной диагонали, умножить на вектор В(N). В памяти матрицу не получать.\n";
}
void massive_initialization(int mas[],int K, int switcher) {
	if (switcher)  cout << "Введите элементы нижнего треугольника матрицы: "; 
	else cout << "Введите координаты вектора: ";
	for (int i = 0; i < K; i++) {
		cin >> mas[i];
	}
}
void matrix_initialization(int matrix[][N], int mas[]) {
	int count = 0, num = 0;
	srand(time(0));
	matrix[0][0] = rand() % 6;
	for (int i = 1; i < N; i++) {
		for (int j = i; j >= 0; j--) {
			if (j == i) { matrix[i][j] = rand() % 6; count++; }
			else { matrix[i][j] = mas[num]; matrix[i - count][j + count] = mas[num]; count++; num++; }
		}
		count = 0;
	}
	cout << "Получившаяся матрица: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix_mulpiplication(int matrix[][N], int mas[]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] *= mas[j];
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int switcher = 0;
	const int K = (N*N - N) / 2;
	int matrix[N][N], triangle[K], vector[N];
	srand(time(0));
	while (1)
	{
		cout << "Введите 1, чтобы просмотреть текст задания." << endl;
		cout << "Введите 2, чтобы выполнить программу." << endl;
		cout << "Введите 0, чтобы выйти из программы." << endl;
		cin >> switcher;
		switch (switcher)
		{
		case 1:
		{
			showtask();
			break;
		}
		case 2:
		{
			massive_initialization(triangle, K, 1);
			matrix_initialization(matrix, triangle);
			massive_initialization(vector, N, 0);
			matrix_mulpiplication(matrix, vector);
			break;
		}
		case 0:
		{
			return 0;

		}
		default: cout << "Введите число заново" << endl;
			break;
		}
	}
}