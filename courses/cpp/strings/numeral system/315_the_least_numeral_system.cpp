/*
  problem #315
  the least numeral system
  acmp
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  string A = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  // 48-57  65-90
  string s;
  getline(cin, s);
  int cur_code = 0;
  int codeSi;
  int base = 0;
  int pos = 0;

  for (int i = 0; i < s.length(); i++) {
    codeSi = (int) s[i];
    // lol
    if (((codeSi >= 48) && (codeSi <= 57)) ||
        ((codeSi >= 65) && (codeSi <= 90))) {
      for (int j = base; j <= A.length(); j++) {
        if (s[i] == A[j]) {
          base = j + 1;
        }
      }
    } else {
      base = -1;
      break;
    }
  }
  if (base == 1) {
    base = 2;  
  }
  cout << base << endl;
  return 0;
}