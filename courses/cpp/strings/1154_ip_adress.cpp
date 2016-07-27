/*
  problem #1153
  euphonious word
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

int cti(char sym) {
  return (int) sym - 48;
}

int getByte(char s1, char s2, char s3, char s4, char s5, int count) {
  switch (count) {
    case 1: 
      return cti(s1);
    case 2:
      return (cti(s1) * 10 + cti(s2));
    case 3:
      return (cti(s1) * 100 + cti(s2) * 10 + cti(s3));
    case 4:
      return (cti(s1) * 1000 + cti(s2) * 100 + cti(s3) * 10 + cti(s4));
    case 5:
      return (cti(s1) * 10000 + cti(s2) * 1000 + cti(s3) * 100 + cti(s4) * 10 + cti(s5));
  }
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char sym;
  char s1, s2, s3, s4, s5;
  int count = 0;
  int qty_bytes = 0;
  bool answer = true;
  while (!in.eof()) {
    while ((in >> sym && (sym != '.')) && !in.eof()) {
      count++;
      switch (count) {
        case 1: s1 = sym; break;
        case 2: s2 = sym; break;
        case 3: s3 = sym; break;
        case 4: s4 = sym; break;
        case 5: s5 = sym; break;
      }
    }
    if (count != 0) {
      int byte = getByte(s1, s2, s3, s4, s5, count);
      cout << byte << endl;
      if (!(byte <= 255)) {
        answer = false;
        break;
      }
      qty_bytes++;
      if (qty_bytes == 1) {
        if (byte == 0) {
          answer = false;
          break;
        }
      }
      count = 0;
    } else {
      answer = false;
      break;
    }
  }
  if ((answer) && (qty_bytes == 4)) {
    out << "Good";
  } else {
    out << "Bad";
  }
  return 0;
}