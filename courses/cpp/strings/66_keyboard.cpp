/*
  problem #66
  keyboard
  acmp
  Artemov Kirill
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  string KB = "qwertyuiopasdfghjklzxcvbnm";
  char sym;
  cin >> sym;
  int kb_length = KB.length();
  int sym_pos = 0;
  for (int i = 0; i < kb_length; i++) {
    if (sym == KB[i]) {
      sym_pos = i;
      break;
    }
  }
  if (sym_pos != kb_length - 1) {
    cout << KB[sym_pos + 1] << endl;
  } else {
    cout << KB[0] << endl;
  }
  return 0;
}