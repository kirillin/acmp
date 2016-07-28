/*
  problem #59
  a simple calculation
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

string reverse(string str) {
  int buf;
  long len = str.length();
  for (long i = 0; i <  len / 2; i++) {
    buf = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = buf;
  }
  return str;
}

string decToBase(long n, int base) {
  string res = "";
  int rest;
  while (n > base - 1) {
    rest = n % base;
    res = res + (char) (rest + 48);
    n = n / base;
  }
  res = res + (char) (n + 48);
  return reverse(res);
}

int main() {
  long n, base;
  cin >> n >> base;  
  string res = decToBase(n, base);
  long sum = 0;
  long mult = 1;
  int digit;
  for (int i = 0; i < res.length(); i++) {
    digit = ((int) res[i] - 48);
    sum += digit;
    mult *= digit;
  }
  cout << mult - sum << endl;
  return 0;
}