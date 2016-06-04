/*
  Problem N1129
  bank interest
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float x, p, y;
  float b, a;
  float n;
  cin >> x >> p >> y;
  b = y / x;
  a = 1 + p / 100;
  if (b >= 1) {
    n = log(b) / log(a);
  }
  if (n > floor(n)) {
    cout << floor(n) + 1 << endl;  
  } else {
    cout << floor(n) << endl;  
  }
	return 0;
}
