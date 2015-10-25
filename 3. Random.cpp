#include <iostream>
#include <clocale>
#include <iomanip>
using std::cin;
using std::cout;
using std::setw;
int main(){
	long int a = 4096, c = 150889, m = 714025, i = 0;
	int const N = 20;
	long long int mas[N];
	mas[0] = 1;
	cout << " 1 = " << mas[0] << "\n";
	for (i = 1; i<N; i++) {mas[i] = (a*mas[i - 1] + c) % m;
						   cout << setw(2) << i + 1 << " = " << mas[i] << "\n";}
	return 0;}