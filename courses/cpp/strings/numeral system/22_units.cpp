/*
  problem #22
  units
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

string decToBin(int dec) {
  string bin = "";
  int rest;
  while (dec > 1) {
    rest = dec % 2;
    bin = bin + (char) (rest + 48);
    dec = dec / 2;
  }
  bin = bin + (char) (dec + 48);
  return bin;
}

int main() {
  int n;
  cin >> n;  
  string bin = decToBin(n);
  int count = 0;
  for (int i = 0; i < bin.length(); i++) {
    if (bin[i] == '1') {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}