/*
  Problem N14
  least common multiply
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

int main() {
    int a, b, gcd, lcm;
    cin >> a >> b;
    gcd = gcd_bin(a, b);
    lcm = a * b / gcd;
    cout << lcm << endl;
    return 0;
}