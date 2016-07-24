/*
  problem #1151
  password
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char sym;
  bool isLower = false, 
        isUpper = false, 
        isDigit = false;
  int count = 0;
  
  while (!in.eof()) {
    in >> sym;
    if ((sym >= 'a') && (sym <= 'z')) {
      isLower = true;
    }
    if ((sym >= 'A') && (sym <= 'Z')) {
      isUpper = true;
    }
    if ((sym >= '0') && (sym <= '9')) {
      isDigit = true;
    }
    if (!in.eof()) { // ерунда какая-то    
      count++;
    }
  }
  if (isLower && isUpper && isDigit && (count >= 12)) {
    out << "Yes";
  } else {
    out << "No";
  }
  return 0;
}