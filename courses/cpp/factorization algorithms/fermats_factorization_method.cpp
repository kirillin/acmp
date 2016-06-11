/*
  Problem FACTORIZATION
  Fermat's factorization method 
  2 divisors and only for odd
  NOT WORK FULLY
  Artemov Kirill
*/
#include <iostream>
#include <cmath> 

using namespace std;

int main() {
  long n, sqrt_n;
  cin >> n;
  long a, bb;
  float b;
  a = sqrt(n)+1;  
  b = sqrt(a*a - n);
  while ((b - floor(b)) > 0) {
    a++;
    bb = a * a - n;
    b = sqrt(bb);
  }
  cout << (a - b) << endl;
  cout << (a + b) << endl;
  return 0;
}