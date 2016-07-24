/*
  problem #1152
  insert symbol
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char sym, symP;
  in >> symP;
  while (!in.eof()) {
    sym = symP;
    if (!in.eof()) { // ерунда какая-то
      out << sym;
      in >> symP;
      if (!in.eof()) {
        out << '#';      
      }
    }
  }
  return 0;
}