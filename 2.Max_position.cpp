#include <iostream>
#include <clocale>
using std::cin;
using std::cout;
int main() {
	setlocale(LC_ALL, "Russian");
	int num = 0, i = 1, pos = 0, max = 0, z = 0;
	cout << "Введите число: ";
	cin >> num;
	pos = num % 10;
	max = pos;
	while (num > 0) {
		pos = num % 10;
		if (pos >= max) {max = pos;
						 z = i;}
		i++;
		num = num / 10;
	}
	cout << "Наибольшая цифра числа: " << max << " Его позиция: " << z;
	return 0;
}
