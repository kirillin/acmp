/*
  Problem N1142
  monotone fragment
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  int k, max_length, cur_length;
  int prev, prev_prev;
  max_length = 0;
  cur_length = 1;
  prev_prev = -1;
  in >> prev;
  if (prev != 0) {
    do {
      in >> k;
      if (k != 0) {
        if (k > prev) {
          if (prev < prev_prev) {
            cur_length = 1;
          }
          cur_length++;        
        } else if (k < prev) {
          if (prev > prev_prev) {
            cur_length = 1;
          }
          cur_length++;
        } else if (k == prev) {
          cur_length = 1;
        }
      }
      if (max_length <= cur_length) {
        max_length = cur_length;
      }      
      prev_prev = prev;
      prev = k;
    } while (k != 0);
  }
  out << max_length << endl;
  return 0;
}