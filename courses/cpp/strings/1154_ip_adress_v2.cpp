/*
  problem #1153
  euphonious word
  acmp
  Artemov Kirill
*/
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int strToInt(string byte) {
  if (byte.empty()) return 999;
  int length = byte.length();
  int num = byte[length-1] - 48;
  for (int i = length - 2; i >= 0; i--) {
    num += pow(10, (length - i - 1)) * ((int) byte[i] - 48);  
 }
  return num;
}

int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  string ip = "";
  getline(in, ip);
  int cur_byte;
  string b = "";
  bool flag = true;
  ip += ".\n";
  int i = 0;
  while (ip[i] != '\n') {
    if (ip[i] != '.') {
      b += ip[i];
    } else {
      cur_byte = strToInt(b);
      if (cur_byte > 255) {
        flag = false;
        break;
      }
      b = "";
    }
    i++;
  }
  if (flag) {
    out << "Good";
  } else {
    out << "Bad";
  }
  return 0;
}