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
  int k, first, length;
  in >> first;
  length = 0;
  if (first != 0) {
    do {
      in >> k;
      if (k > first) {
        length++;
      } else if (k < first){
        first = k;
      }
    } while (k != 0);
  }
  out << length << endl;
    return 0;
}