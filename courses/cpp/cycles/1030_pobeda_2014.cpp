/*
  Problem N1030
  POBEDA-2014
  acmp.ru
  Artemov Kirill
*/
#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;

long long getMin(long long a, long long b) {
  if ((a == 0) || (b == 0)) {
    return 0;
  } else {
    return (a >= b) ? b : a;
  }
}

int main() {
  long long a1, a2, a3, a4;
  //long long a1=1000000000000000000, a2=1000000000000000000, a3=1000000000000000000, a4=999999999999999999;
  cin >> a1 >> a2 >> a3 >> a4;
  long long s = getMin(a1, a2) + getMin(a3, a4);
  long long n = sqrt(s);;
  cout << n << endl;
  return 0;
}