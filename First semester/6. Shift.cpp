#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int A[N], n;
	cout << "Заполните массив: ";
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		cout << A[i] << "; ";
	}
	cout << "\nВведите число n<10: ";
	cin >> n;
	for (int i = n - 1; i < N - 1; i++) { A[i] = A[i + 1]; }
	for (int i = 0; i < N-1; i++) {
		cout << A[i] << "; ";
	}
}