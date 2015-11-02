#include <iostream>
#include <clocale>
#include <ctime>
using std::cout;
void swap(int A[], int a, int b) {
	int tmp = A[a];
	A[a] = A[b];
	A[b] = tmp;}
void intialization(int A[], int N) {
	srand(time(0));
	cout << "Начальный массив: ";
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 101 - 50;
		cout << A[i] << ", ";
	}
}
void reverse(int A[], int N) {
	cout << "\n" << "Массив в обратном порядке: ";
	for (int i = 0; i < N / 2; i++) { swap(A, i, N - i - 1); }
	for (int i = 0; i < N; i++) { cout << A[i] << ", "; }
}
void parity(int A[], int N) {
	cout << "\n" << "Элементы на нечетных позициях: ";
	for (int i = 0; i < N; i = i + 2) { cout << A[i] << ", "; }
	cout << "\n" << "Элементы на четных позициях: ";
	for (int i = 1; i < N; i = i + 2) { cout << A[i] << ", "; }
}
void posneg(int A[], int N) {
	int sum = 0, sum1 = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] <= 0) { sum++; }
		else { sum1++; }}
	cout << "\n" << "Количество отрицательных элементов: " << sum << "\n" << "Количество положительных элементов: " << sum1 << "\n";
}
void maxmin(int A[], int N) {
	int  max = A[0], min = A[0];
	for (int i = 0; i < N; i++) {
		if (A[i] > max) { max = A[i]; }
		if (A[i] <= min) { min = A[i]; }
	}
	cout << "Максимальный элемент: " << max << "\n";
	cout << "Минимальный элемент: " << min << "\n";
}
int main() {
	int const N = 100;
	int A[N];
	setlocale(LC_ALL, "Russian");
	intialization(A, N);
	reverse(A, N);
	parity(A, N);
	posneg(A, N);
	maxmin(A, N);
}