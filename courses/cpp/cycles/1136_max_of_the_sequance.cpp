/*
  Problem N1136
  max of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, max;
  max = -1;
  do {
    in >> k;
    if (k > max) {
      max = k;
    }
  } while (k != 0);
  out << max << endl;
	return 0;
}
