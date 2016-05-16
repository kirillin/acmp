#include <iostream>
#include <string>

#define B "black"
#define R "red"
#define Y "yellow"
#define G "green"
#define YY "YELLOW"
#define GG "GREEN"

using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	if ((a == B) && (b == B) && (c == G)) {
		cout << B << endl;
		cout << B << endl;
		cout << GG << endl;
	} else if ((a == B) && (b == B) && (c == GG)) {
		cout << B << endl;
		cout << Y << endl;
		cout << B << endl;
	} else if ((a == B) && (b == Y) && (c == B)) {
		cout << R << endl;
		cout << B << endl;
		cout << B << endl;
	} else if ((a == R) && (b == B) && (c == B)) {
		cout << R << endl;
		cout << Y << endl;
		cout << B << endl;
	} else if ((a == R) && (b == Y) && (c == B)) {
		cout << B << endl;
		cout << B << endl;
		cout << G << endl;
	} else if ((a == B) && (b == YY) && (c == B)) {
		cout << B << endl;
		cout << YY << endl;
		cout << B << endl;
	} else {
		cout << "error";
	}	
	return 0;
}
