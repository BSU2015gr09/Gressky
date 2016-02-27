#include <iostream> //76.Найти число из заданного массива чисел с максимальной суммой своих простых делителей, включая их в сумму по одному разу.
#include <clocale>
#include <ctime>
using namespace std;
void init(int *a, int num) {
	for (int i = 0; i < num; i++) {
		*(a + i) = rand() % 50 + 2;
		cout << *(a + i) << "; ";
	}
	cout << endl;
}
void divisors(int *a, int *b, int num) {
	int tmp = 0, sum = 0, inc = 2, count = 0;
	for (int i = 0; i < num; i++) {
		tmp = *(a + i);
		while (tmp != 1) {
			if (tmp % inc == 0) {	
				tmp /= inc;
				count++;
				if (count == 1) { sum += inc; }
			}
			else {
				count = 0;
				inc++;
			}
		}
		*(b + i) = sum;
		cout << *(b + i) << "; ";
		sum = 0; inc = 2, count = 0;
	}
}
void maximum(int *a, int *b, int num) {
	int max = 0, tmp = 0;
	for (int i = 0; i < num; i++) {
		if (*(b + i) > max) { max = *(b + i); tmp = i; }
	}
	cout << "\nМаксимальная сумма простых делителей у числа " << *(a + tmp) << endl;
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int num = 0;
	cout << "Введите размер массива: ";
	cin >> num;
	int *a = new int[num], *b = new int[num], *p = a;
	init(a, num);
	divisors(p, b, num);
	maximum(a, b, num);
	return 0;
}