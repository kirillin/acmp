/*
  Problem N1131
  bisection
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <cmath>
 
using namespace std;

int main() {

  epsx = 0.001;
  // from right side to left by step 1
  xr = 1;
  xl = 0;
  while (sign(yxl) == sign(yxr)) {
    yxl = a * xl*xl*xl + b * xl*xl + c * xl + d;
    yxr = a * xr*xr*xr + b * xr*xr + c * xr + d;
    xr++;
    xl++;
  }

  while ((xr - xl) > epsx) {

  }


  return 0;
}