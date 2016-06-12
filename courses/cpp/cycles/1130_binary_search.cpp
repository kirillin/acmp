/*
  Problem N1130
  binary search
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
  long long n;
  int step = 0;
  cin >> n;
  /*
  cout << ceil(log2(n)) << endl;  
  */
  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (n+1) / 2;
    }
    step++;
  }
  cout << step << endl;
  return 0;
}