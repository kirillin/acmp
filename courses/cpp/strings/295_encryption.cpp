/*
  problem #283
  rune words
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;


bool isSub(string known_word, string encription) {
  int lengthKW = known_word.length();
  int i = 0;
  bool flag;
  while (i < encription.length()-lengthKW+1) {
    flag = true;
    if ((known_word[0] == encription[i]) &&
        (known_word[lengthKW - 1] == encription[i + lengthKW - 1]) &&
        (known_word[(lengthKW - 1) / 2] == encription[i + (lengthKW - 1) / 2])) {
        for (int o = 1; o < lengthKW - 1; o++) {
          if (!(known_word[o] == encription[o + i])) {
            flag = false;
          }
        }
    } else {
      flag = false;
    }
    if (flag) {
      break;
    }
    i++;
  }
  return flag;
}

char shift(char sym, int offset) {
  int codeSym = (int) sym;
  int bufCode = codeSym + offset - 65;
  if (bufCode > 25) {
    codeSym = bufCode - (bufCode / 26) * 26; 
  } else {
    codeSym = bufCode;
  }
  return codeSym+65;
}

string cicleShift(string encription, int offset) {
  string str = encription;
  for (int j = 0; j < str.length(); j++) {
    str[j] = shift(str[j], 1);
  }
  return str;
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  string encription = "";
  string known_word = "";
  getline(in, encription);
  getline(in, known_word);
  bool flag = false;
  string res = "";
  if (encription.length() >= known_word.length()) {
    for (int i = 25; i >= 0; i--) {
      if (isSub(known_word, encription)) {
        flag = true;
        res = encription;
      }
      encription = cicleShift(encription, i);
    }
  }    
  if (flag) {
    out << res;
  } else {
    out << "IMPOSSIBLE";
  }
  return 0;
}