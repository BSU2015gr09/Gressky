#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
void casualmassives(int A[], int N) {
	int a;
	cout << endl;
	for (int i = 0; i < N - 1; i++) {
		A[i] = A[i + 1];
		cout << A[i] << "; ";
	}
	cout << endl;
	cout << "Введите числo: ";
	cin >> a;
	A[N - 2] = a;
	for (int i = 1; i < N - 1; i++) {
		A[i - 1] = A[i];
		cout << A[i] << "; ";
	}
	cout << endl;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int A[N];
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 20+1;
		cout << A[i] << "; ";
	}
	casualmassives(A, N);
	casualmassives(A, N);
	
}