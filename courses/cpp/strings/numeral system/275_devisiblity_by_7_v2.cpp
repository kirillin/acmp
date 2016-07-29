/*
  problem #275
  divisiblity by 7 DONT WORK!!
  acmp
  Artemov Kirill
*/
#include <iostream>
#include <fstream>
#include <cmath>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int n;
  in >> n;
  char sym;
  int count;
  while (!in.eof()) {
    count = 0;
    while (in.get(sym) && sym != '\n') {
      if (sym == '1') {
        count++;
      }
    }
    if (count != 0) {
      if (count % 3 == 0) {
        out << "Yes" << endl;
      } else {
        out << "No" << endl;
      }
    }
  }
  return 0;
}