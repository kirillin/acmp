/*
  problem #941
  unix
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <cmath>

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

long long baseToDec(int base, string bin) {
  bin = reverse(bin);
  long long dec = 0;
  for (int i = 0; i < bin.length(); i++) {
    dec += ((int) bin[i] - 48) * pow(base, i);
  }
  return dec;
}

int main() {
  string n, m;
  cin >> n >> m;
  cout << baseToDec(3, n) + baseToDec(3, m) << endl;
  return 0;
}