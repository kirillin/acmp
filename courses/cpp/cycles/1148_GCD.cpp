/*
  Problem N1148
  the greatest common devisor
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>
 
using namespace std;
 
int gcd_lol(int a, int b) {
  if (a == b) {
    return a;
  } else if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  } else if ((a == 1) || (b == 1)) {
    return 1;
  } else if (a % b == 0) {
    return b;
  } else if (b % a == 0) {
    return a;
  } else if (a > b) {
    return gcd_lol(a, a % b);
  } else if (a < b) {
    return gcd_lol(b, b % a);
  }
}


int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

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
    int a, b, buf;
    cin >> a >> b;
    cout << gcd_bin(a, b) << endl;
    if (a < b) {
      buf = a;
      a = b;
      b = buf;
    } 

    while (b > 0) {
      buf = b;
      b = a % b;
      a = buf;
    }
    //cout << a << endl;
    return 0;
}