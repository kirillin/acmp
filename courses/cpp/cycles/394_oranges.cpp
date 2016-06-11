/*
  Problem N394
  oranges
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>
  
using namespace std;
 
long gcd_bin(long a, long b) {
  long d = 0;
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

int main() {
    long long n, m, gcd, lcm;
    cin >> n >> m;
    gcd = gcd_bin(n, m);
    lcm = n * m / gcd;
    cout << lcm / m << endl;
    return 0;
}