/*
	Problem N1125
	list of squares
	acmp.ru
	Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n, sqrt_n, i;
	cin >> n;
	sqrt_n = sqrt(n);
	i = 1;
	while (i <= sqrt_n) {
		cout << i * i << " ";;
		i++;
	}
	return 0;
}