/*
  problem #1211
  deforestation
  acmp.ru
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  long long a, b;
  long long k, m, x;
  cin >> a >> k >> b >> m >> x;
  long long l, r, mid, treesA, treesB;
  l = 0;
  //long long big = 1000000000000;
  l = 0;
  r = 2 * x / (a + b) + 1;
  //r = min((big - big / k), (big - big / m) * b);
  while (l + 1 < r) {
    mid = (l + r) / 2;
    // how many trees has been cut by lumberjacks
    // treesA = a * (k - 1) * (mid / k) + a * (mid % k);
    // treesB = b * (m - 1) * (mid / m) + b * (mid % m);
    treesA = (mid - mid / k) * a;
    treesB = (mid - mid / m) * b;
    if (treesA + treesB >= x) {
      r = mid;
    } else {
      l = mid;
    }
  }
  cout << r << endl;
  return 0;
}

