#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int a = 0, b = 0, c = 0, res1 = 0, res2 = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Добро пожаловать в Кости! Победитель тот, у кого выпадет больше очков" << endl;
	while (1 > 0) {cout << "Для игры введите любое число: ";
			cin >> c;
			a = 1 + rand() % 6;
			b = 1 + rand() % 6;
			switch (a) {
			case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
			cout << endl;
			switch (b) {
			case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
			res1 = a + b;
			cout << endl << "Ваш результат: " << res1 << endl;
			a = 1 + rand() % 6;
			b = 1 + rand() % 6;
			switch (a) {
			case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
			cout << endl;
			switch (b) {
			case 1: cout << "-----" << endl << "--o--" << endl << "-----" << endl; break;
			case 2: cout << "-----" << endl << "-o-o-" << endl << "-----" << endl; break;
			case 3: cout << "o----" << endl << "--o--" << endl << "----o" << endl; break;
			case 4: cout << "--o--" << endl << "-o-o-" << endl << "--o--" << endl; break;
			case 5: cout << "--o--" << endl << "o-o-o" << endl << "--o--" << endl; break;
			case 6: cout << "-o-o-" << endl << "-o-o-" << endl << "-o-o-" << endl; break;}
			res2 = a + b;
			cout << endl << "Результат компьютера: " << res2 << endl;
			if (res1 > res2) { cout << "Вы победили!" << endl; }
			if (res1 == res2) { cout << "Ничья!" << endl; }
			if (res1 < res2) { cout << "Вы проиграли!" << endl; }}
	return 0;}