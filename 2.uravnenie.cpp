#include <iostream>
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
int main() {
	float d = 0, x1 = 0, x2 = 0, a = 1, b = 1, c = 1, i = 0;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����������� a: ";
	cin >> a;
	cout << "������� ����������� b: ";
	cin >> b;
	cout << "������� ����������� c: ";
	cin >> c;
	d = b*b - (4 * a*c);
	if (a == 0 && b == 0) { cout << "��������� ��������� ��� ��������� ������ �� ��������� " << c; }
	if (a == 0 && b != 0) { cout << "������ �������� ����� " << -c / b; }
	if (a != 0 && b != 0 && d > 0) { cout << "������ ������: " << (-b + sqrt(d)) / 2 / a << "\n" << "������ ������: " << (-b - sqrt(d)) / 2 / a; }
	if (a != 0 && b != 0 && d == 0) { cout << "������ �������� �����: " << -b / 2 / a;}
	if (a != 0 && b != 0 && d < 0) { { cout << "������ ������: " << (-b + sqrt(-d)) / 2 / a << "*i" << "\n" << "������ ������: " << (-b - sqrt(-d)) / 2 / a << "*i"; } }
	return 0;
}