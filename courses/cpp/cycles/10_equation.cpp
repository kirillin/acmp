/*
	Problem N10
	equation 
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long x_old = -101;
	for (int x = -100; x <= 100; x++) {
		if ((a*x*x*x + b*x*x + c*x + d) == 0) {
			if (x != x_old) {
				cout << x << ' ';
				x_old = x;
			}
		}
	}
	return 0;
}