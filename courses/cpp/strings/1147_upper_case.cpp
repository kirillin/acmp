/*
  problem #1147
  upper case
  acmp
  Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  char sym;
  cin >> sym;
  int codeSym = (int) sym;
  /*
    digits 0-9 48-57
    upper case A-Z 65-90
    lower case a-z 97-122
  */
  if ((codeSym >= 97) && (codeSym <= 122)) {
    cout << (char) (codeSym - 32) << endl;
  } else {
    cout << (char) codeSym << endl;
  }
  return 0;
}