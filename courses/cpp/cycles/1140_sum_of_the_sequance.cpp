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
  int k, sum, prev;
  sum = 0;
  k = -1;
  do {
    prev = k;
    in >> k;
    sum += k;
  } while ((k != prev) || (k != 0));
  out << sum << endl;
  return 0;
}