#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main() {
	setlocale(LC_ALL, "Russian");
	int num = 1, sum = 0, i = 0;
	cout << "������� �����, �� ������� ��������������: ";
	while (num >= 0) {
		cin >> num;
		sum = sum + num;
	}
	cout << "����� ��������� ��������������� �����: " << sum - num;
	return 0;
}