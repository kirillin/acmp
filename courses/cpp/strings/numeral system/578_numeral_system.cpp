/*
  problem #578  
  numeral system
  acmp
  Artemov Kirill
*/
#include <iostream>
#include <string>

using namespace std;

string decToTr(int n) {
  string t = "";
  int rest = 0;
  while (n > 2) {
    rest = n %  3;
    n = n / 3;
    t += (char) (rest + 48);
  }
  t += (char) (n + 48);
  return t;
}

string reverse(string tt) {
  string t;
  t = tt;
  char buf;
  int n = t.length();
  for (int i = 0; i < n/2; i++) {
    buf = t[i];
    t[i] = t[n - i - 1];
    t[n - i - 1] = buf;
  }
  return t;
}

/*
  01 -> 30
  02 -> 31
  03 -> 32
*/
string solveProblem(string t) {
  int n = t.length();
//  for (int i = 0; i < n; i++) {
  int i = 0;
  while (i < n - 1) {
    if ((t[i] == '0') && (t[i+1] != '0')) {
      t[i] = '3';
      char x = t[i+1];
      switch (x) {
        case '1':
          t[i+1] = '0';
          break;
        case '2':
          t[i+1] = '1';
          break;
        case '3':
          t[i+1] = '2';
          break;
      }
      i = 0;
      continue;
    }
    i++;
  }
  
  return t;
}

int main() {
  int n;
  cin >> n;
  string t012, t123;
  t012 = decToTr(n);
  t123 = solveProblem(t012);
  t123 = reverse(t123);
  for (int i = 0; i < t123.length(); i++) {
    if (t123[i] != '0') {
      cout << t123[i];
    }
  }
  cout << endl;
  return 0;
}