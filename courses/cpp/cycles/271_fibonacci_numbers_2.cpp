/*
  Problem N271
  Fibonacci numbers 2
  acmp.ru
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  int n, i, ak, ak1, ak2;
  cin >> n;
  ak1 = 1;
  ak2 = 1;
  ak = 0;
  i = 1;
  while (ak <= n) {
    ak = ak1 + ak2;
    ak1 = ak2;
    ak2 = ak;
    i++;
  }
  // "ak1" because while with precondition
  // after equality n and ak run past iteration
  if (ak1 == n) {
    cout << 1 << endl;
    cout << i << endl;
  } else {
    cout << 0 << endl;
  }  
	return 0;
}