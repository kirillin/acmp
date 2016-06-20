/*
  problem 1
  multiples of 3 and 5
  projecteuler.net
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  int n = 1000;
  int a = 0;
  int b = 0;
  int eq = 0;
  int sum = 0;
  while (a < n) {
    sum += a;
    cout << a << endl;        
    a += 3;    
  }
  while (b < n) {
    sum += b;
    cout << b << endl;        
    b += 5;    
  }
  while (eq < n) {
    sum -= eq;
    cout << eq << endl;        
    eq += 15;    
  }

  cout << sum << endl;
  return 0;
}