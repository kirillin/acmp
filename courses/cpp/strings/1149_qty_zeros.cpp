/*
  problem #1149
  quantity zeros
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char sym;
  int codeSym = 57;
  int count = 0;
  while (!in.eof()) {// ((codeSym >= 48) && (codeSym <= 57)) {
    in >> sym;
    cout << sym << " ";
    codeSym = (int) sym;
    if ((codeSym == 48) && (!in.eof())) { // ерунда какая-то
      count++;
      cout << sym;
    }
    cout << endl;
  }
  out << count << endl;
  return 0;
}