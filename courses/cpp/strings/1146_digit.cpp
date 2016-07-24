/*
  problem #1146
  digit
  acmp
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  char sym;
  cin >> sym;
  int codeSym = (int) sym;
  if ((codeSym >= 48) && (codeSym <= 57)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}