/*
  problem #542
  bit reverse
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

string decToBin(int dec) {
  string bin = "";
  int rest;
  while (dec > 1) {
    rest = dec % 2;
    bin = bin + (char) (rest + 48);
    dec = dec / 2;
  }
  bin = bin + (char) (dec + 48);
  return reverse(bin);
}

long long binToDec(string bin) {
  int base = 2;
  bin = reverse(bin);
  long long dec = 0;
  for (int i = 0; i < bin.length(); i++) {
    dec += ((int) bin[i] - 48) * pow(base, i);
  }
  return dec;
}

int main() {
  long n;
  cin >> n;
  cout << binToDec(reverse(decToBin(n))) << endl;
  return 0;
}