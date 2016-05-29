/*
	Problem N131
	census
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

#define MALE 1
#define FEMALE 0

using namespace std;

int main() {
	int n, v, s, v_prev, n_of_theoldest;
	cin >> n;
	v_prev = -1;
	n_of_theoldest = -1;
	for (int i = 1; i <= n; i++) {
		cin >> v >> s;
		if ((s == MALE) && (v_prev < v)) {
			v_prev = v;
			n_of_theoldest = i;
		}
	}
	cout << n_of_theoldest;
	return 0;
}