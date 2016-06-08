/*
  Problem N1141
  equals elements
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, max_length, cur_length;
  int prev, prev_prev;
  max_length = 1;
  cur_length = 1;
  k = -1;
  prev = -2;
  do {
    prev_prev = prev;
    prev = k;
    in >> k;
    if (k == prev) {
      cur_length++;
    } else {
      if (prev == prev_prev) {
        if (max_length <= cur_length) {
          max_length = cur_length;
        }
        cur_length = 1;
      }
    }
  } while (k != 0);
  out << max_length << endl;
  return 0;
}