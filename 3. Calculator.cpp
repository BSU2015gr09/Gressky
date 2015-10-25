#include <iostream>
#include <clocale>
using std::cout;
using std::cin;
int main()
{	 float z = 0, x = 0, y = 0, C=0, res;
	 char oper = 0;
	setlocale(LC_ALL, "Russian");
	while (1 > 0) {
		if (C == 0) {
			cout << "Введите первое число: ";
			cin >> x;
			cout << "Введите операцию (для выхода введите e, для сброса введите c: ";
			cin >> oper;
			if (oper != 'e') {cout << "Введите второе число: ";
							  cin >> y;}
			calc:
			switch (oper) {
			case '+': z = x + y;
				cout << "Результат: " << z << "\n";
				x = z;
				C = 1;
				break;
			case '-': z = x - y;
				cout << "Результат: " << z << "\n";
				x = z;
				C = 1;
				break;
			case '*': z = x * y;
				cout << "Результат: " << z << "\n";
				x = z;
				C = 1;
				break;
			case '/': z = x / y;
				cout << "Результат: " << z << "\n";
				x = z;
				C = 1;
				break;
			case 'e': goto end;
				break;
			case 'c': C = 0;
				cout << "Выражение обнулилось "<<"\n";
				break;}}
		else {cout << "Введите операцию (для выхода введите e, для сброса введите c): ";
			  cin >> oper;
			  if (oper != 'e' && oper != 'c') { cout << "Введите второе число: ";
								 cin >> y;}
		      goto calc;}}
	end:
	return 0;
}
