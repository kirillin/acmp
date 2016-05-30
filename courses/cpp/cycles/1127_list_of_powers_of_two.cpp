/*
	Problem N1127
	list of powers of two
	acmp.ru
	Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n, base;
	cin >> n;
	base = 2;	
	if (n <= 2) {
		cout << 1 << " ";
	}
	if (n > 2) {
		cout << 1 << " ";
		cout << 2 << " ";
	}
	while ((2 * base) <= n) {
		base = base * 2;
		cout << base << " ";
	}
	return 0;
}