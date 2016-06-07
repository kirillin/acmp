/*
  Problem N1133
  the sum of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, sum;
  sum = 0;
  do {
    in >> k;
    sum += k;
  } while (k != 0);
  out << sum << endl;
	return 0;
}
