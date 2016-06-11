/*
  Problem FACTORIZATION
  all divisors
  
  Artemov Kirill
*/
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
  long n, sqrt_n, i, qty_divisors;
  cin >> n;
  i = 2;
  sqrt_n = sqrt(n);
  qty_divisors = 0;
  while (n > i) {
    if (n % i == 0) {
      cout << i << endl;
      qty_divisors++;
    }
    i++;
  }
  return 0;
}