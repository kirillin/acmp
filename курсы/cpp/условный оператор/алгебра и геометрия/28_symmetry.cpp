/*
    28
    symmetry
*/
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    long long x1, y1, x2, y2;
    long long xa, ya;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> xa >> ya;
    if (x1 == x2) {
        if (abs(xa) > abs(x1)) {
            cout << (-1) * (xa - x1);
        } else if (abs(xa) < abs(x1)){
            cout << x1 - xa + x1;
        } else {
            cout << xa;
        }
        cout << " " << ya;      
    } else if (y1 == y2) {
        cout << xa << " ";          
        if (abs(ya) > abs(y1)) {
            cout << (-1) * (ya - y1);
        } else if (abs(ya) < abs(y1)){
            cout << y1 - ya + y1;
        } else {
            cout << ya;
        }
    }
    return 0;
}
