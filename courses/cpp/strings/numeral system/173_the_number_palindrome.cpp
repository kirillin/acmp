/*
  problem #173
  the number palindrome
  acmp
  Artemov Kirill
*/
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

bool isPalindrome(string str) {
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return false;
    }
  }
  return true;
}

string intToStr(int n) {
  string str = "";
  while (n > 0) {
    str += (char) (n % 10 + 48);
    n = n / 10;    
  }
  return reverse(str);
}

int main() {
  long n;
  cin >> n;
  string bases = "";
  int count = 0;
  for (int i = 2; i <= 36; i++) {
    if (isPalindrome(decToBase(n, i))) {
      if (count > 0) {
        bases += " ";
      }
      count++;
      bases = bases + intToStr(i);
    }
  }
  switch (count) {
    case 0:
      cout << "none" << endl;
      break;
    case 1:
      cout << "unique" << endl;
      cout << bases << endl;
      break;
    default:
      cout << "multiple" << endl;
      cout << bases << endl;
  }
  return 0;
}