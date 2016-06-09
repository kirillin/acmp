/*
  Problem N1145
  the standart deviation [math is fun, trust me!! :)]
  acmp.ru
  Artemov Kirill
*/
#include <fstream>
#include <iomanip>
#include <cmath>  
 
using namespace std;
 
int main() {
  ifstream in("input.txt");
  ofstream out("output.txt");
  float el, sum, qsum, sigma;
  int n;
  sum = 0;
  qsum = 0;
  n = -1; // -1 because last element is 0 
            // which we exclude here
  do {
    in >> el;
    sum += el;
    qsum += el * el;
    n++;
  } while (el != 0);
  sigma = sqrt((qsum - sum * sum / n) / (n - 1));
  out << fixed << setprecision(3) << sigma << endl;
    return 0;
}