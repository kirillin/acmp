#include <iostream>
#define YES "YES"
#define NO "NO"

using namespace std;

int min(int a, int b) {
	int min;
	if (a <= b) {
		min = a;
	} else {
		min = b;
	}
	return min;
}


int max(int a, int b) {
	int max;
	if (a >= b) {
		max = a;
	} else {
		max = b;
	}
	return max;
}

bool is(int a, int b, int h, int w) {
	if ((a <= h) && (b <= w)) {
//		cout << a << " <= " << h << " && " << b << " <= " << w << endl;
		return true;
	} else {
//		cout << a << " <= " << h << " && " << b << " <= " << w << "!!!FALSE" <<endl;
		return false;
	}
}

int main() {
	int l1, w1, h1;
	int l2, w2, h2;
	int lc, wc, hc;
	cin >> l1 >> w1 >> h1;
	cin >> l2 >> w2 >> h2;
	cin >> lc >> wc >> hc;
	int w = min(wc, lc);
	int h = max(wc, lc);
	if (hc >= max(h1, h2)) {
		if (((is(l1, w1, h, w) && ((is(w2, l2, h, w-w1) || is(l2, w2, h, w-w1)) || (is(w2, l2, h-l1, w) || is(l2, w2, h-l1, w)))) ||
			(is(w1, l1, h, w) && ((is(w2, l2, h, w-w1) || is(l2, w2, h, w-w1)) || ((is(w2, l2, h-l1, w) || is(l2, w2, h-l1, w)))))) ||

			((is(l2, w2, h, w) && ((is(w1, l1, h, w-w2) || is(l1, w1, h, w-w2)) || (is(w1, l1, h-l2, w) || is(l1, w1, h-l2, w)))) ||
			(is(w2, l2, h, w) && ((is(w1, l1, h, w-w2) || is(l1, w1, h, w-w2)) || ((is(w1, l1, h-l2, w) || is(l1, w1, h-l2, w)))))))
		{	
			cout << YES;
		} else if ((hc >= (h1 + h2)) &&
			(((wc >= max(w1, w2)) && (lc >= max(l1, l2))) || 
			((lc >= max(w1, w2)) && (wc >= max(l1, l2)))))
		{
			cout << YES;
		} else {
			cout << NO;
		}
	} else {
		cout << NO;
	}
    return 0;
}