#include <iostream>
#include <clocale>
using namespace std;
int const N = 10000;
int stack[N];
int top = 0;
void push(int num) {
	if (stack[0] == 0) {// Т.е. я не смогу в стек помещать нули???? Что за странный стек )))))
		stack[top] = num;
		top++;
	}
	else {
		for (int i = top; i >= 0; i--) { stack[i + 1] = stack[i]; }
		stack[0] = num;
		top++;
	}
}
int stack_out(int num) {
	int s = 0;
	for (int i = 0; i < N; i++) {
		if (stack[i] != 0) { s += 1; }
	}
	if (num != 0) { cout << "\nКоличество элементов стека: " << s; }
	return s;
}
void pop(int num){
	if (stack_out(0) == 0) { cout << "\nСтек пустой, нечего брать!"; }
	else {
		if (num == 0) { cout << "\nЭлемент, который только что достали: " << stack[0]; }
		for (int i = 0; i <= top; i++) { stack[i] = stack[i + 1]; }
		cout << "\nЭлемент взят!";
	}
	
}
void view(int ) {
	cout << "\nВершина стека: " << stack[0];
}

int main() {о
	setlocale(LC_ALL, "Russian");
	int a, b, c, d; // зачем столько переменных???? Смыст стека как раз в том, что можно так: for (i=1;i<100,;i++) {cin >> a;push(a);}
	cout << "Введите число: ";
	cin >> a;
	push(a);
	cout << "\nВведите число: ";
	cin >> b;
	push(b);
	cout << "\nВведите число: ";
	cin >> c;
	push(c);
	view(1);
	stack_out(1);
	pop(1);
	view(1);
	stack_out(1);
	pop(0);
	stack_out(1);
	pop(0);
	stack_out(1);
	pop(1);
	cout << "\nВведите число: ";
	cin >> d;
	push(d);
	stack_out(1);
}
