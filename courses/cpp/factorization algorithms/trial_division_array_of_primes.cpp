/*
  Problem FACTORIZATION
  trial divisors from wiki
  some very sloooow garbage 
  Artemov Kirill
*/
#include <iostream>
#include <cmath> 

using namespace std;

bool isPrime(int n) {
  int i, qty_divisors;
  i = 2;
  qty_divisors = 0;
  while (n > 1) {
    if (n % i == 0) {
      n = n / i;
      qty_divisors++;
    } else {
      i++;
    }
  }
  if (qty_divisors == 1) {
    return true;
  } else {
    return false;
  }
}

int main() {
  long init_n, n, sqrt_n;
  long r, q, t, k;
  cin >> init_n;
  sqrt_n = init_n;
  long p[sqrt_n], d[sqrt_n];  
  k = 0;
  for (int j = 2; j <= sqrt_n; j++) {
    if (isPrime(j)) {
      cout << j << ",";
      d[k] = j;
      k++;
    }
  }
  t = 0;
  k = 0;
  n = init_n;  
  while (n > 1) {
    q = n / d[k];
    r = n % d[k];
    if (r == 0) {
      p[t] = d[k];
      t++;
      n = q;
    } else {
      if (q > d[k]) {
        k++;
      }
    }
    if (isPrime(n)) {
      p[t] = n;
      break;
    }
  }
  for (int i = 0; i <= t; i++) {
    //cout << p[i] << endl;
  }
  return 0;
}