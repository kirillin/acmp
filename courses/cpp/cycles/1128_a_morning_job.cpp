/*
  Problem N1128
  a morning job  
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double x, y;
  cin >> x >> y;
  double pr = 15.0 / 100.0;
  int day = 1;
    while (x <= y) {
      x = x + x * pr;
      day++;
    }
    cout << day << endl;
	return 0;
}
