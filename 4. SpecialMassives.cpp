#include <iostream>
#include <clocale>
using std::cout;
int main(){
	const int N = 5;
	setlocale(LC_ALL, "Russian");
	int A[N][N];
	int k = 1;
	cout << "Вывод слева-направо: " << "\n";
	for (int i = 0; i<N; i++){
		for (int j = 0; j<N; j++){A[i][j] = k;
					 cout << A[i][j]<<"\t";
					 k++;}
		cout << "\n";}
	cout << "Вывод справа-налево: " << "\n";
	for (int i = 0; i<N; i++){
		for (int j = N - 1; j >= 0; j = j - 1){cout << A[i][j] << "\t";}
		cout << "\n";}
	cout << "Вывод плугом: " << "\n";
	for (int i = 0; i<N; i++){
		if (i % 2 != 0){for (int j = N - 1; j >= 0; j = j - 1){cout << A[i][j] << "\t";}}
		else {for (int j = 0; j<N; j++){cout << A[i][j] << "\t";}}
		cout << "\n";}
	return 0;
}
