/*
  problem #44
  arrows
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string r_arrow = ">>-->";
  string l_arrow = "<--<<";

  ifstream in("input.txt");
  ofstream out("output.txt");
  string str;  
  char sym;
  while (!in.eof()) {
    in >> sym;
    if(!in.eof()) {
      str += sym;
    }
  }
  int l_sub = 5;
  int length = str.length();// - l_sub;
  int count = 0;
  bool isArraow = true;
  for (int i = 0; i < length; i++) {
    if (str[i] == '>') {
      for (int j = i; j < i + l_sub; j++) {
        if (str[j] != r_arrow[j-i]) {
          isArraow = false;
          break;
        }
      }
    } else if (str[i] == '<') {
      for (int j = i; j < i + l_sub; j++) {
        if (str[j] != l_arrow[j-i]) {
          isArraow = false;
          break;
        }
      }
    } else if (str[i] == '-') {
      isArraow = false;
    }
    if (isArraow) {
      count++;
    }
    isArraow = true;
  }
  out << count;
  return 0;
}