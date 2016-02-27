#include <iostream>
#include <clocale>
using std::cout;
void XORShift(int &x){
	int tmp, a = 13, b = 15, c = 5;
	tmp = x ^ (x << a);
	tmp = tmp ^ (tmp >> b);
	x = tmp ^ (tmp << c);}
int main(){
	setlocale(LC_ALL, "Russian");
	int x = 4;
	XORShift(x);
	cout << "Полученное псевдослучайное число: " << x << "\n";
	return 0;}