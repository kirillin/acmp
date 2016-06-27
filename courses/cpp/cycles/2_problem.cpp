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
    n = 10;
    ak1 = 0;
    ak2 = 1;
    i = 0;
    long long sum = 0;
    while (i < n - 1) {
      ak = ak1 + ak2;
      if (ak % 2 == 0) {
        sum += ak;
      }
      ak1 = ak2;
      ak2 = ak;
      i++;
    }
  return 0;
}