/*
	Problem N1126
	the minimum devider
	acmp.ru
	Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long n, i;
	cin >> n;
	i = 2;
	while (n % i != 0) {
		i++;
	}
	cout << i << endl;
	return 0;
}