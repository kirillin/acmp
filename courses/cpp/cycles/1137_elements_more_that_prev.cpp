/*
  Problem N1137
  blablabla
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int prev, el, qty;
  qty = 0;
  in >> prev;
  if (prev != 0) {
    do {
      in >> el;
      if (el > prev) {
        qty++;
      }
      prev = el;
    } while (el != 0);
  }
  out << qty << endl;
    return 0;
}