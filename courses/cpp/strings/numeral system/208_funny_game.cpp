/*
  problem #208
  funny game
  acmp
  Artemov Kirill
*/
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

string decToBase(long n, int base) {
  string res = "";
  int rest;
  while (n > base - 1) {
    rest = n % base;
    if (rest < 10) {
      res = res + (char) (rest + 48);
    } else {
      res = res + (char) (rest % 10 + 65);
    }
    n = n / base;
  }
  if (n < 10) {
    res = res + (char) (n + 48);
  } else {
    res = res + (char) (n % 10 + 65);
  }
  return reverse(res);
}

string intToStr(int n) {
  string str = "";
  while (n > 0) {
    str += (char) (n % 10 + 48);
    n = n / 10;    
  }
  return reverse(str);
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

string shift(string bin) {
  char buf = bin[0];
  for (int i = 0; i < bin.length(); i++) {
    bin[i] = bin[i + 1];
  }
  bin[bin.length() - 1] = buf;
  return bin;
}

string shiftOffset(string bin, int offset) {
  for (int i = 0; i < offset; i++) {
    bin = shift(bin);
  }
  return bin;
}

int main() {
  long n;
  cin >> n;
  string bin = decToBase(n, 2);
  long cur = 0;
  int count = 1;
  long max = 0;
  while (cur != n) {
    //cout << bin << " = " << cur << endl;    
    bin = shift(bin);
    cur = binToDec(bin);
    if (max <= cur) {
      max = cur;
    }    
    count++;
  }
  cout << max << endl;
  return 0;
}