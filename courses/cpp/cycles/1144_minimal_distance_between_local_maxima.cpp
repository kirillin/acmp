/*
  Problem N1144
  minimal distance between local maxima
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int prev, el, next;
  int qty_max, min_distance, cur_distance;
  qty_max = 0;
  min_distance = 202;
  cur_distance = 101;
  in >> prev;
  if (prev != 0) {
    in >> el;
    if (el != 0) {
      in >> next;
      if (next != 0) {
        do {
          if ((prev < el) && (el > next)) {
            qty_max++;
            if (cur_distance < min_distance) {
              min_distance = cur_distance;
            }
            cur_distance = 0;
          }
          prev = el;
          el = next;
          in >> next;
          cur_distance++;
        } while (next != 0);
      }
    }
  }
  if (min_distance > 100) {
    out << 0 << endl;
  } else {
    out << min_distance << endl;
  }  
  return 0;
}