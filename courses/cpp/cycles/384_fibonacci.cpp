/*
  Problem N384
  Fibonacci
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>
 
using namespace std;
 
int gcd_bin(int a, int b) {
  int d = 0;
  while ((a % 2 == 0) && (b % 2 == 0)) {
    a = a / 2;
    b = b / 2;
    d++;
  }
  while (a != b) {
    if (a % 2 == 0) {
      a = a / 2;
    } else if (b % 2 == 0) {
      b = b / 2;
    } else if (a > b) {
      a = (a - b) / 2;
    } else {
      b = (b - a) / 2;
    }
  }
  return a * pow(2, d);
}

int fib(int n) {
  int fi, f1, f2;
  f1 = 1;
  f2 = 1;
  if (n <= 2) {
    fi = 1;
  }
  while (n > 2) {
    fi = f1 % 1000000000 + f2 % 1000000000;
    f1 = f2;
    f2 = fi;
    n--;
  }
  return fi;
}

int main() {
    int i, j, n;
    cin >> i >> j;
    n = gcd_bin(i, j);
    cout << fib(n) % 1000000000 << endl;
    return 0;
}