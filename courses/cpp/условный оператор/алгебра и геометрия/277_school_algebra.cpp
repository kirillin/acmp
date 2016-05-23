/*
	Problem N277
	School algebra
	acmp.ru
	Artemov Kirill
*/
#include <iostream>
#include <cmath>

#define X "x";
#define Y "y";

using namespace std;

char getSign(int a) {
	if (signbit(a) == 1) {
		return '-';
	} else {
		return '+';
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a != 0) {
		cout << a;
		if (b != 0) {
			if (abs(b) == 1) {
				cout << getSign(b) << X;
			} else {
				cout << getSign(b) << abs(b) << X;						
			}
			if (c != 0) {
				if (abs(c) == 1) {
					cout << getSign(c) << Y;
				} else {
					cout << getSign(c) << abs(c) << Y;
				}
			}
		} else {
			if (c != 0) {
				if (abs(c) == 1) {
					cout << getSign(c) << Y;
				} else {
					cout << getSign(c) << abs(c) << Y;
				}
			}
		}
	} else if (a == 0) {
		if (b != 0) {
			if (abs(b) == 1) {
				if (getSign(b) == '+') {
					cout << X;
				} else {
					cout << getSign(b) << X;
				}
			} else {
				if (getSign(b) == '+') {
					cout << b << X;
				} else {
					cout << getSign(b) << abs(b) << X;						
				}
			}
			if (c != 0) {
				if (abs(c) == 1) {
					cout << getSign(c) << Y;
				} else {
					cout << getSign(c) << abs(c) << Y;
				}
			}
		} else {
			if (c != 0) {
				if (abs(c) == 1) {
					if (getSign(c) == '+') {
						cout << Y;
					} else {
						cout << getSign(c) << Y;
					}
				} else {
					if (getSign(c) == '+') {
						cout << c << Y;
					} else {
						cout << getSign(c) << abs(c) << Y;
					}
				}
			} else {
				cout << 0;
			}
		}
	}
	return 0;
}