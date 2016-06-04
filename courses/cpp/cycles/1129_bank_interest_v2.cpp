/*
  Problem N1129
  bank interest
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, p, y;
  cin >> x >> p >> y;
  double pr = 1.0 + p / 100.0;
  int years = 0;
  while (x < y) {
    x = x * pr;
    years++;
  }
  cout << years << endl;
	return 0;
}
