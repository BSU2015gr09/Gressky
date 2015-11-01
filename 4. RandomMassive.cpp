#include <iostream>
#include <clocale>
#include <ctime>
using std::cout;
void swap(int A[], int a, int b) {
	int tmp = A[a];
	A[a] = A[b];
	A[b] = tmp;}
int main() {
	int const N = 100;
	int A[N], sum = 0, sum1 = 0, i, max, min, B[N];
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "Начальный массив: ";
	for (i = 0; i < N; i++) {
		B[i] = 1;
		A[i] = rand() % 101 - 50;
		cout << A[i] << ", ";
	}
	cout << "\n" << "Массив в обратном порядке: ";
	for (i = 0; i < N / 2; i++) { swap(A, i, N - i - 1); }
	for (i = 0; i < N; i++) { cout << A[i] << ", "; }
	cout << "\n" << "Элементы на нечетных позициях: ";
	for (i = 0; i < N; i = i + 2) { cout << A[i] << ", "; }
	cout << "\n" << "Элементы на четных позициях: ";
	for (i = 1; i < N; i = i + 2) { cout << A[i] << ", "; }
	for (i = 0; i < N; i++) {
		if (A[i] <= 0) { sum++; }
		else { sum1++; }
	}
	cout << "\n" << "Количество отрицательных элементов: " << sum << "\n" << "Количество положительных элементов: " << sum1 << "\n";
	sum = 0; sum1 = 0; max = A[0]; min = A[0];
	for (i = 0; i < N; i++) {
		if (A[i] > max) { max = A[i]; }
		if (A[i] <= min) { min = A[i]; }
	}
	cout << "Максимальный элемент: " << max<<  "\n";
	cout << "Минимальный элемент: " << min << "\n";
}