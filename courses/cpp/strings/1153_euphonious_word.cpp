/*
  problem #1153
  euphonious word
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>

using namespace std;

/*
  97 - a
  101 - e
  105 - i
  111 - o
  117 - u
  121 - y
*/
bool isVowel(char sym) {
  switch (sym) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y': return true;
    default: return false;
  }
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  char f, s, t;
  int count = 0;
  if (!in.eof()) {
    in >> f;
    if (!in.eof()) {
      in >> s;
      while (!in.eof()) {
        in >> t;
        //cout << f << s << t << endl;
        if (((isVowel(f) && isVowel(s) && isVowel(t)) 
          || (!isVowel(f) && !isVowel(s) && !isVowel(t))) 
          && !in.eof()) {
          count++;
          f = t;
          if (!in.eof()) {
            in >> s;
          }
        } else {
          f = s;
          s = t;
        }
        //cout << count << endl;
      }
    }
  }
  out << count << endl;
  return 0;
}