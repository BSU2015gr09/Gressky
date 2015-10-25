#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 39;
	float mas[N], a, b;
	int n;
	cout << "                         Отношение                         " << endl;
	cout << "Последующего к предыдущему   |    Предыдущего к последующему" << endl;
	cout << "                   1         |          1                  " << endl;
	mas[0] = 1;
	mas[1] = 1;
	for (n = 2; n < N; n++){
		mas[n] = mas[n - 1] + mas[n - 2];
		a = mas[n] / mas[n - 1];
		b = mas[n - 1] / mas[n];
		cout << setw(20) << setprecision(5) << a;
		cout << setw(10) << "|";
		cout << setw(10) << fixed << setprecision(5) << " " << b << endl;}
	return 0;}
