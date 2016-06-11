/*
  Problem FACTORIZATION
  Fermat's factorization method 
  2 divisors 
  NOT WORK FULLY
  Artemov Kirill
*/
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
  long n, sqrt_n;
  cin >> n;
  long x, y, r;
  sqrt_n = sqrt(n);
  x = 2 * sqrt_n + 1;
  y = 1;
  r = sqrt_n * sqrt_n - n;
  while (r != 0) {
    r = r + x;
    x = x + 2;
    do {
      r = r - y;
      y = y + 2;
    } while (r > 0);
  }
  cout << ((x-y)/2) << endl;
  cout << ((x+y-2)/2) << endl;
  return 0;
}