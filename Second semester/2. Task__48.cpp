#include<iostream>
#include<clocale> 
#include<ctime>
using namespace std;

void showtask() {
	cout << "48. Элементы массива А(N) упорядочить в порядке возрастания, используя сортировку пузырек, и вставить k заданных числа, не нарушая упорядоченности массива." << endl;
}
void keyboard_initialization(int *mas, int N) {
	cout << "Введите " << N << "чисел." << endl;
	for (int i = 0; i < N; i++) {
		cin >> *(mas + i);
	}
}

void random_initialization(int *mas, int N) {
	for (int i = 0; i < N; i++) {
		*(mas + i) = rand() % 100 + 1;
	}
}

void show_massive(int *mas, int N) {
	cout << "Текущий массив: ";
	for (int i = 0; i < N; i++)
		cout <<*(mas + i) << "; ";
	cout << endl;
}

void bubble(int* a, int n){
	for (int i = n - 1; i >= 0; i--){
		for (int j = 0; j < i; j++){
			if (a[j] > a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
void additions(int *mas, int N) {
	int k = 0, n = 0;
	cout << "Введите количество элементов, которых хотите добавить в массив: ";
	cin >> k;
	int *arr = new int[N + k];
	for (int i = 0; i<N; i++) {
		*(arr + i) = *(mas + i);
	}
	int *add = new int[k];
	cout << "Введите числа, которые хотите добавить: ";
	for (int i = 0; i < k; i++) {
		cin >> *(add + i);
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < N + n; j++) {
			if (*(add + i) < *(arr + j)) {
				for (int f = (N + n) - 1; f >= j; f--) {
					*(arr + f + 1) = *(arr + f);
				}
				*(arr + j) = *(add + i);
				n++;
				break;
			}
			if (j == N + n - 1) {
				*(arr + N + n) = *(add + i);
				n++;
				break;
			}
		}
	}
	cout << "Массив с добавленными числами: ";
	show_massive(arr, N + k);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int *mas = new int[N];
	int pick, temp = 0;
	while (1)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - Просмотреть условие задачи\n";
		cout << "2 - Выполнить задачу\n";
		if (temp == 1) {
			cout << "3 - Заполнить массив вручную\n";
			cout << "4 - Заполнить массив случайными числами\n";
		}
		if (temp == 2) {
			cout << "5 - Вывести массив" << endl;
			cout << "6 - Отсортировать массив" << endl;
			cout << "7 - Добавить в массив элементы" << endl;

		}
		cout << "0 - Завершить программу" << endl;
		cin >> pick;
		switch (pick)
		{
		case(1) : {showtask(); break; }
		case(2) : {temp = 1; break; }
		case(3) : {keyboard_initialization(mas, N); temp = 2; break; }
		case(4) : {random_initialization(mas, N); show_massive(mas, N); temp = 2; break; }
		case(5) : {
			if (temp == 2)
				show_massive(mas, N);
			else
				cout << "Введите число заново" << endl;
			break;
		}
		case(6) : {
			if (temp == 2) {
				bubble(mas, N);
				show_massive(mas, N);
			}
			else
				cout << "Введите число заново" << endl;
			break;

		}
		case(7) : {
			if (temp == 2)
				additions(mas, N);
			else
				cout << "Введите число заново" << endl;
			break;
		}
		case(0) : return 0;
		default: {cout << "Введите число заново" << endl; break; }
		}
	}
	return 0;
}