/*
	Problem N411
	quadratic equation
	acmp.ru
	Artemov Kirill
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	long a, b, c;
	double D;
	double x1, x2;
	cin >> a >> b >> c;
	D = b * b - 4.0 * a * c;
	if (a != 0) {
		if (D > 0) {
			cout << 2 << endl;
			x1 = ((-1.0) * b - sqrt(D)) / (2.0 * a);
			x2 = ((-1.0) * b + sqrt(D)) / (2.0 * a);	
			cout << fixed << setprecision(6) << x1 << endl;
			cout << fixed << setprecision(6) << x2;
		} else if (D == 0) {
			cout << 1 << endl;
			x1 = ((-1.0) * b) / (2.0 * a);
			cout << fixed << setprecision(6) << x1;
		} else if (D < 0) {
			cout << 0;
		}
	} else {
		if (b != 0) {
			if (c != 0) {
				cout << 1 << endl;
				x1 = ((-1.0) * c) / b;
				cout << fixed << setprecision(6) << x1;
			} else {
				cout << 1 << endl;
				cout << 0;
			}
		} else {
			if (c != 0) {
				cout << 0;
			} else {
				cout << -1;
			}
		}
	}
	return 0;
}