#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
void initialization(int A[], int N) {
	srand(time(0));
	for (int i = 0; i < N; i++) { A[i] = rand() % 10; cout << A[i] << " "; }
}
void returning_index(int A[], int N, int a) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] == a) { cout << "\n Индекс элемента с таким значением: " << i + 1 << "\n"; break; }
		else { sum++; }
	}
	if (sum == N) { cout << "\n -1 \n"; }
}
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 20;
	int a, A[N];
	initialization(A, N);
	cout << "\n Введите число: ";
	cin >> a;
	returning_index(A, N, a);
}