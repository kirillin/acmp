/*
  problem #297
  circles of digits
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
  int qty_circles, count = 0;  
  while (!in.eof()) {
    in >> sym;
    switch (sym) {
      case '0': 
      case '6': 
      case '9': qty_circles = 1; break;
      case '8': qty_circles = 2; break;
      default : qty_circles = 0;
    }
    if (!in.eof()) { // ерунда какая-то    
      count += qty_circles;
    }
  }
  out << count;
  return 0;
}