/*
	Problem N233
	bus tour
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

#define BUS_HEIGHT 437

using namespace std;

int main() {
	int n, bridge_height;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> bridge_height;
		if (bridge_height <= BUS_HEIGHT) {
			cout << "Crash " << i;
			return 0;
		}
	}
	cout << "No crash";
	return 0;
}