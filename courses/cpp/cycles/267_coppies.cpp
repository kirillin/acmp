/*
  problem #267
  coppies
  acmp.ru
  Artemov Kirill
*/
#include <iostream>

using namespace std;

long long min(long long a, long long b) {
  if (a <= b) {
    return a;
  } else {
    return b;
  }
}

long long max(long long a, long long b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  long long n, x, y;
  cin >> n >> x >> y;
  long long l = min(x, y);
  long long r = max(x, y) * (n-1);
  long long mid;
  //cout << "L = " << l << "; R = " << r << endl;
  if (n > 1) {
    while (l != r) {
      mid = (l + r) / 2;
      //cout << "mid = " << mid << endl;
      long long n_cur = mid / x + mid / y;
      //cout << "n_cur = " << n_cur << endl;
      if (n_cur < n-1) {
        l = mid+1;
      } else {
        r = mid;
      }
      //cout << "L = " << l << "; R = " << r << endl;
     // cout << "*********************\n";

    }
    cout << l + min (x,y) << endl;    
  } else {
    cout << min(x,y) << endl;
  }
  return 0;
}

