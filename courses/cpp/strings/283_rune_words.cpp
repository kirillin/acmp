/*
  problem #283
  rune words
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool isCapital(char sym) {
  if ((sym >= 65) && (sym <= 90)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char sym;
  int count = 0;
  bool flag = true;
  if (!in.eof()) {
    in >> sym;
    if (isCapital(sym)) {
      count = 1;
      while (!in.eof()) {
        in >> sym;
        if (!in.eof()) {
          if (isCapital(sym)) {
            cout << sym << endl;
            if (!((count == 2) || 
                (count == 3) || 
                (count == 4))) {
              flag = false;
              break;
            } else {
              count = 1;
            }
          } else {
            count++;
            if (count > 4) {
              flag = false;
              break;
            }
          }
        } else {
          if (count == 1) {
            flag = false;
          }
        }
      }
    } else {
      flag = false;
    }
  } else {
    flag = false; // moar flags, eaaah!
  }
  if (flag) {
    out << "Yes";
  } else {
    out << "No";
  }
  return 0;
}