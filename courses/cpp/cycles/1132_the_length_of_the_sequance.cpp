/*
  Problem N1132
  the length of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, length;
  length = 0;
  do {
    in >> k;
    length++;
  } while (k != 0);
  out << (length - 1) << endl;
	return 0;
}
