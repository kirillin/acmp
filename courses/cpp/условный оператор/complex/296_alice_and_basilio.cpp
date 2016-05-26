/*
	Problem N296
	Goldbach problem (?)
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

// COIN_A must be greater than COIN_B
#define COIN_A 5
#define COIN_B 3

using namespace std;

// 0 <= iter <= (n / COIN_A)
bool canDecomposeNFor(int n, int iter) {
	if((n % COIN_A + iter * COIN_A) % COIN_B == 0)	{
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	int k_coin_a, k_coin_b;
	cin >> n;
	int iter = 0;
	if (canDecomposeNFor(n, iter)) {
		iter = 0;
	} else if (canDecomposeNFor(n, iter + 1)) {
		iter = 1;
	} else if (canDecomposeNFor(n, iter + 2)) {
		iter = 2;
	} else if (canDecomposeNFor(n, iter + 3)) {
		iter = 3;
	} else if (canDecomposeNFor(n, iter + 4)) {
		iter = 4;
	} else if (canDecomposeNFor(n, iter + 5)) {
		iter = 5;
	} else if (canDecomposeNFor(n, iter + 6)) {
		iter = 6;
	}
	k_coin_a = n / COIN_A - iter;
	k_coin_b = (n % COIN_A + iter * COIN_A) / COIN_B;
	cout << k_coin_a << ' ' << k_coin_b << endl;
	return 0;
}