/*
  Problem N1140
  sum of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, sum;
  bool f_zero, s_zero;
  sum = 0;
  f_zero = false;
  s_zero = false;
  do {
    in >> k;
    sum += k;
    // im monkey ))
    if (k == 0) {
      if (f_zero == true) {
        s_zero = true;
      }
      f_zero = true;
    } else {
      f_zero = false;
    }
  } while (s_zero != true);
  out << sum << endl;
    return 0;
}