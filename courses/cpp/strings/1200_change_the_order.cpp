/*
  problem #1200
  change the order
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string reverse(string str) {
  int length = str.length();
  string reversed = "";
  for (int i = 0; i < length; i++) {
    reversed += str[length - i - 1];
  }
  return reversed;
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k;
  in >> k;
  string day = "";
  char sym;
  while (!in.eof()) {
    while (((sym = in.get()) != '\n') && !in.eof()) {
      day += sym;
    }
    if (!day.empty()) {
      int length = day.length();
      string name = "";
      for (int i = length - 1; i >= -1; i--) {
        if ((day[i] != ' ') && (i >= 0)) {
          name += day[i];
        } else {
          out << reverse(name);
          name = "";
          if (i > 0) {
            out << ' ';
          }
        }
      }
      out << '\n';
    }
    day = "";
  }
  return 0;
}