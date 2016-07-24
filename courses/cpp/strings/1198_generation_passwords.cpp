/*
  problem #1198
  generation passwords
  acmp
  Artemov Kirill
*/
#include <iostream>

using namespace std;

void writeInACircle(int qty, int startCode, int endCode, int offset) {
  int alphabet_size = endCode - startCode + 1;
  int denominator = 0;
  if (offset >= alphabet_size) {
    offset = offset - (offset / alphabet_size) * alphabet_size;
  }
  for(int i = 1; i <= qty; i++) {
    int r = i - 1 + startCode - denominator + offset;
    if (r > alphabet_size + startCode-1) {
      r = r - alphabet_size;
    }
    cout << (char) r;
    if (i % alphabet_size == 0) {
     denominator += alphabet_size;
    }
  }
}

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  writeInACircle(a, 65, 90, 0);
  writeInACircle(b, 97, 122, a);
  writeInACircle(c, 48, 57, 0);
  writeInACircle(n-a-b-c, 65,90, a + b);
  return 0;
}