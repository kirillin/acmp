/*
	Problem N147
	Fibonacci numbers
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
  	int n, ak, ak1, ak2, i;
  	cin >> n;
  	ak1 = 0;
  	ak2 = 1;
  	i = 0;
  	while (i < n - 1) {
      ak = ak1 + ak2;
      ak1 = ak2;
      ak2 = ak;
      i++;
  	}
    if (n == 0){
      cout << 0;
    } else if (n == 1) {
      cout << 1;
    } else {
      cout << ak << endl;
    }
	return 0;
}