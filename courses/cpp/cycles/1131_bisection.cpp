/*
  Problem N1131
  bisection
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <iomanip>
#include <cmath>
 
#define EPSX 0.001
#define NMAX 1000

using namespace std;

int a, b, c, d;

double f(double x) {
  return a * x*x*x + b * x*x + c * x + d;
}

int main() {
  int n;
  double xr, xl, xm, xd;
  cin >> a >> b >> c >> d;  
  xl = -10001;
  xr = 10000;
  xd = xr - xl;
  while (n <= NMAX) {
    xm = (xl + xr) / 2.0;
    if ((f(xm) == 0) || ((xr - xl) / 2 < EPSX)) {
      break;
    }
    n++;
    if (signbit(f(xm)) == signbit(f(xl))) {
      xl = xm;
    } else {
      xr = xm;
    }
  }
  cout << fixed << setprecision(4) << xm << endl;
  return 0;
}