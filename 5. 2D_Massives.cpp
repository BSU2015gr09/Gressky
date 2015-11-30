#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 5;
	int A[N][N], max = A[0][0], min = A[0][0], sum = 0, sum1 = 0;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = rand() % 9;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				sum += A[i][j];
			}
		}
	}
	cout << "\n" << " Сумма элементов главной диагонали: " << sum;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j < i) { sum1 += A[i][j]; }
		}
	}
	cout << "\n" << " Сумма элементов нижнего треугольника: " << sum1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] <= min) {
				min = A[i][j];
				for (int k = 0, l = 0; k < N; k++) {
					if (A[k][l] >= max) { max = A[k][l]; }
					if (min == max && i == k && j == l) {
						cout << "Седловая точка равна " << max << " и имеет координаты [" << k << ", " << l << "]";
					}
					else { l++; };
				}
			}
		}
	}
}