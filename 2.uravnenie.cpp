#include <iostream>
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
int main() {
	float d = 0, x1 = 0, x2 = 0, a = 1, b = 1, c = 1, i = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Введите коэффициент a: ";
	cin >> a;
	cout << "Введите коэффициент b: ";
	cin >> b;
	cout << "Введите коэффициент c: ";
	cin >> c;
	d = b*b - (4 * a*c);
	if (a == 0 && b == 0) { cout << "Уравнение принимает вид уравнения прямой со значением " << c; }
	if (a == 0 && b != 0) { cout << "Корнем является число " << -c / b; }
	if (a != 0 && b != 0 && d > 0) { cout << "Первый корень: " << (-b + sqrt(d)) / 2 / a << "\n" << "Второй корень: " << (-b - sqrt(d)) / 2 / a; }
	if (a != 0 && b != 0 && d == 0) { cout << "Корнем является число: " << -b / 2 / a;}
	if (a != 0 && b != 0 && d < 0) { { cout << "Первый корень: " << (-b + sqrt(-d)) / 2 / a << "*i" << "\n" << "Второй корень: " << (-b - sqrt(-d)) / 2 / a << "*i"; } }
	return 0;
}