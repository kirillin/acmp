/*
  problem #504
  flowers
  acmp
  Artemov Kirill
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  string flw = "GCV";
  int k;
  cin >> k;
  char buf;
  for(int i = 1; i <= k*2; i++) {
    if (i % 2 != 0) {
      buf = flw[1];
      flw[1] = flw[2];
      flw[2] = buf;
    } else {
      buf = flw[0];
      flw[0] = flw[1];
      flw[1] = buf;
    }
  }
  cout << flw << endl;
  return 0;
}