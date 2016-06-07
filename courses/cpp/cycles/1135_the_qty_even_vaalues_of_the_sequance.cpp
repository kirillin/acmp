/*
  Problem N1135
  qty even values of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, qty_even;
  qty_even = 0;
  do {
    in >> k;
    if ((k % 2 == 0) && (k != 0)) {
      qty_even++;
    }
  } while (k != 0);
  out << qty_even << endl;
	return 0;
}
