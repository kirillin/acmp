/*
  Problem N272
  sum max and min 
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int n, max, min, count;
  count = 1;
  min = 99999;
  max = -99999;
  while (!in.eof()) {
    in >> n;
    if (count % 2 == 0) {
      if (n > max) {
        max = n;
      }
    } else {
      if (n < min) {
        min = n;
      }
    }
    count++;
  }
  out << (max + min) << endl;
	return 0;
}
