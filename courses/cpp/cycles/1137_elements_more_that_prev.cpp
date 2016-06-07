/*
  Problem N1137
  blablabla
  acmp.ru
  Artemov Kirill
*/
#include <fstream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, prev, length, max_sub_length;
  max_sub_length = 0;
  length = 0;
  in >> prev;
  if (prev != 0) { // lol. im a stupid dude. ha-ha!
    do {
      in >> k;
        if (k > prev) {
          length++;
        } else {
          prev = k;
          if (max_sub_length <= length) {
            max_sub_length = length;
            length = 0;
          }
        }
    } while (k != 0);
  }
  out << max_sub_length << endl;
  return 0;
}
