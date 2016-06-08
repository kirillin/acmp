/*
  Problem N1139
  elements are equals to the max
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, max, qty_max;
  max = -1;
  do {
    in >> k;
    if (k > max) {
      max = k;
      qty_max = 1;
    } else if (k == max) {
      qty_max++;
    }
  } while (k != 0);
  out << qty_max << endl;
    return 0;
}