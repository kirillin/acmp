/*
  problem №1397
  Space settlement
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

int main() {
  long long n, a, b, w, h;
  cin >> n >> a >> b >> w >> h;
  long long l, r;
  long long mid, ad, bd, ac, bc, res1;  
  l = 0;
  r = min(w, h) + 1;
  while (l + 1 < r) {
    mid = (l + r) / 2;
    ad = a + 2 * mid;
    bd = b + 2 * mid;
    ac = w / ad;
    bc = h / bd;
    if ((ac * bc) >= n) {
      l = mid;
    } else {
      r = mid;
    }
  }
  res1 = l;
  l = 0;
  r = min(w, h) + 1;
  while (l + 1 < r) {
    mid = (l + r) / 2;
    ad = a + 2 * mid;
    bd = b + 2 * mid;
    ac = h / ad;
    bc = w / bd;
    if ((ac * bc) >= n) {
      l = mid;
    } else {
      r = mid;
    }
  }
  if (l > res1) {
    cout << l << endl;
  } else {
    cout << res1 << endl;
  }
  return 0;
}

