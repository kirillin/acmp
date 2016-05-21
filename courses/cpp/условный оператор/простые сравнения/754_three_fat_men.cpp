#include <iostream>

using namespace std;

int main() {
	long m1, m2, m3;
	cin >> m1 >> m2 >> m3;
	if (((m1 >= 94) && (m1 <= 727)) &&
		((m2 >= 94) && (m2 <= 727)) &&
		((m3 >= 94) && (m3 <= 727))) {
		if ((m1 >= m2) && (m1 >= m3)) {
			cout << m1;
		} else if ((m2 >= m1) && (m2 >= m3)) {			
			cout << m2;
		} else if ((m3 >= m1) && (m3 >= m2)) {
			cout << m3;	
		}		
	} else {
		cout << "Error";
	}	
	return 0;
}
