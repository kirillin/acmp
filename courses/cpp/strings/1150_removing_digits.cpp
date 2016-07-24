/*
  problem #1150
  removing_digits
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
  /*
    digits 48-57
    4 - 52
    7 - 55
  */
  while (!in.eof()) {
    in >> sym;
    if ((sym != '4') && (sym != '7') && (!in.eof())) { // ерунда какая-то
      out << sym;      
    }
  }
  return 0;
}