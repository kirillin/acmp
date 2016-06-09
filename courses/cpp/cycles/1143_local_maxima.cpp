/*
  Problem N1143
  local maxima
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int prev, el, next;
  int qty_lm, min_distance;
  qty_lm = 0;
  in >> prev;
  if (prev != 0) {
    in >> el;
    if (el != 0) {
      in >> next;
      if (next != 0) {
        do {
          if ((prev < el) && (el > next)) {
            qty_lm++;
          }
          prev = el;
          el = next;
          in >> next;
        } while (next != 0);
      }
    }
  }
  out << qty_lm << endl;
  return 0;
}