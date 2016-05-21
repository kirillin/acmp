#include <iostream>

using namespace std;

int main() {
	long a, b, c;
	cin >> a >> b >> c;
	long temp;
	if ((a + b == c) || (a + c == b) || (b + c == a)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
