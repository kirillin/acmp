/*
  problem #275
  divisiblity by 7
  acmp
  Artemov Kirill
*/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int n;
  in >> n;
  int sum;
  string s = "";
  getline(in, s);  
  for (int i = 0; i < n; i++) {
    getline(in, s);
    //cout << s << endl;
    while (s.length() % 3 > 0) {
      s = '0' + s;
    }
    sum = 0;
    int k = s.length(); 
    int j = 0;
    while (j < k) {
      sum += (s[j] - 48) * 4 + (s[j+1] - 48) * 2 + (s[j+2] - 48);
      j = j + 3;
    }
    //cout << sum << endl;            
    // ы
    if (sum % 7 == 0) {
      out << "Yes" << endl;
    } else {
      out << "No" << endl;
    }
  }
  return 0;  
}