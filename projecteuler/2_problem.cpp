/*
  problem 2
  even fibonacci numbers
  projecteuler.net
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
    int n, ak, ak1, ak2, i;
    n = 33;
    ak1 = 1;
    ak2 = 2;
    i = 3;
    long long sum = 0;
    while (i < n) {
      ak = ak1 + ak2;
      if (ak % 2 == 0) {
        sum += ak;
      }
      cout << ak << endl;
      ak1 = ak2;
      ak2 = ak;
      i++;
    }
    cout << sum+2 << endl;
  return 0;
}

