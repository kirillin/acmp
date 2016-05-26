/*
	Problem N664
	omnomnom
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
	long long k, m, n, t, i, ri;
	cin >> k >> m >> n;
	if ((k == 0) || (m == 0) || (n == 0)) {
		t = 0;
	} else if (n > k ) {
		i = n / k;
		ri = n % k;
		if (ri == 0) {
			t = 2 * m * i;
		} else if (ri <= (k/2)) {
			t = 2 * m * i + m;
		} else {
			t = 2 * m * i + 2 * m;
		}
	} else if (n <= k) {
		t = 2 * m;
	}
	cout << t << endl;
	return 0;
}