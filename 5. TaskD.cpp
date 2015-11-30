#include <iostream>
#include <clocale>
using namespace std;
void special_order(int A[], int N, int &a, int &b) {
	for (int i = 0; i < a - 1; i++) {
		if (A[i] == b) {
			for (int j = i; j < a - 1; j++) {
				A[j] = A[j + 1];
			}
		}
		if (b < A[a - 1]){ cout << A[i] << "; "; }
		if (b > A[a - 1]) {
			for (int k = 0; k < a + 1; k++) {
				A[a] = b;
				cout << A[k] << "; ";
			}
			break;
		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 100;
	int A[N], a, b;
	cout << "Введите используемую часть массива до 100: ";
	cin >> a;
	for (int i = 0; i < a; i++) {
		A[i] = i + 1;
		cout << A[i] << "; ";
	}
	cout << " \n Введите число: ";
	cin >> b;
	special_order(A, N, a, b);
	return 0;
}