/*
  Problem N1131
  bisection
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

int a, b, c, d;


int main() {
  int s, e;
  ofstream out("input.txt");
  s = -1000;
  e = 1000;
  for (int i = -1000; i <= e; i++) {
    for (int j = -1000; j <= e; j++) {
      for (int k = -1000; k <= e; k++) {
        cout << k << endl;              
        for (int l = -1000; l <= e; l++) {
          out << i << " " << j << " " <<  k << " " << l << endl;
        }
      }
    }
  }
  return 0;
}