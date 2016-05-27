/*
	Problem N162
	manhattan police
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
	long n, m, t, segments;
	cin >> n >> m;
	segments = (n + 1) * m + (m + 1) * n; 
	t = 0;
	if ((m == 0) || (n == 0)) {
		t = 0;
	} else if ((n > 0) && (m == 1)) {
		t = segments + n - 1;
	} else if ((n == 1) && (m > 1)) {
		t = segments + m - 1;
	} else if (((n % 2 == 0) && (m % 2 == 0)) || 
			((n % 2 == 0) && (m % 2 != 0) 
			|| (n % 2 != 0) && (m % 2 == 0))) {
		t = segments + n + m;
	} else if ((n % 2 != 0) && (m % 2 != 0)) {
		t = segments + 2 * (n / 2 + m / 2);
	}
	cout << t << endl;
	return 0;
}