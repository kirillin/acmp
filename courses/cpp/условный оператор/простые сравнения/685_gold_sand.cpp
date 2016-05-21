#include <iostream>

using namespace std;

int main() {
	int a[3];
	int b[3];
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];
	int temp;
	for (int i = 0; i < 2; i++) {
		for (int j = i+1; j < 3; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;				
			}
			if (b[i] < b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;				
			}
		}
	}
	cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];	
	return 0;
}
