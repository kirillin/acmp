/*
  Problem N1134
  the avarage value of the sequance
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  float k, sum, avg;
  int length;
  sum = 0;
  length = 0;
  do {
    in >> k;
    sum += k;
    length++;
  } while (k != 0);
  avg = sum / (length - 1);
  out << fixed << setprecision(3) << avg << endl;
	return 0;
}
