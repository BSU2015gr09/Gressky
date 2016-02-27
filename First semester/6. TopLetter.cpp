#include <iostream>
#include <clocale>
using namespace std;
int const N = 10;
char A[N];
int search(int num) {
	int s = 0;
	for (int i = num + 1; i < N; i++) {
		if (A[num] == A[i]) { s++; }
	}
		return s;
		s = 0;
}
int maximum(int B[]) {
	int max = B[0], index = 0;
	for (int i = 1; i < N; i++) {
		if (A[i] > max) { max = A[i], index = i; }
		return (index + 1);
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int B[N] = { 0 };
	cout << "Заполните массив символами: ";
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		B[i] = search(i);
	}
	cout << "Элемент, который повторяется чаще всего: " << A[maximum(B)];
}