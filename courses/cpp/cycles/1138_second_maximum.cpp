/*
  Problem N1138
  second maximum
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, max, max_prev;
  max = -1;
  do {
    in >> k;
    if (k > max) {
      max_prev = max;
      max = k;
    } else if (k > max_prev) {
      max_prev = k;
    }
  } while (k != 0);
  out << max_prev << endl;
    return 0;
}