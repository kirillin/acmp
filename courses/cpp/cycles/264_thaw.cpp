/*
	Problem N264
	thaw
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
	int n, t;
	int thaw, thaw_max;
	cin >> n;
	thaw_max = 0;
	thaw = 0;
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t > 0) {
			thaw++;
			if (thaw_max < thaw) {
				thaw_max = thaw;
			}
		} else {
			thaw = 0;
		}
	}
	cout << thaw_max << endl;
	return 0;
}