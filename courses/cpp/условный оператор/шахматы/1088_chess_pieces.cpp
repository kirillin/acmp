{
	Шахматные фигуры
}
#include <iostream>
#include <cmath>

using namespace std;

bool isQueen(int x1, int y1, int x2, int y2) {
	if ((abs(x1 - x2) == abs(y1 - y2)) ||
			(((x1 == x2) && (y1 != y2)) ||
			((x1 != x2) && (y1 == y2)))) {
		return true;
	}	
	return false;
}

bool isRook(int x1, int y1, int x2, int y2) {
	if (((x1 == x2) && (y1 != y2)) ||
		((x1 != x2) && (y1 == y2))){
		return true;	
	}
	return false;
}

bool isBishop(int x1, int y1, int x2, int y2) {
	if (abs(x1 - x2) == abs(y1 - y2)) {
		return true;
	}
	return false;
}

bool isKnight(int x1, int y1, int x2, int y2) {
	if (((x1 - 2 == x2) && ((y1 - 1 == y2) || (y1 + 1 == y2))) ||
		((x1 + 2 == x2) && ((y1 - 1 == y2) || (y1 + 1 == y2))) ||
	 	((x1 - 1 == x2) && ((y1 - 2 == y2) || (y1 + 2 == y2))) ||
		((x1 + 1 == x2) && ((y1 - 2 == y2) || (y1 + 2 == y2)))) {
		return true;
	}
	return false;
}

bool isPawn(int x1, int y1, int x2, int y2) {
	if ((x1 == x2) && (y1 != 1) && 
		((y2 == y1 + 1) || ((y1 == 2) && (y2 == y1 + 2)))) {
		return true;
	}
	return false;
}

bool isKing(int x1, int y1, int x2, int y2) {
	bool flag = false;
	for (int x = x1-1; x <= x1+1; x++) {
		for (int y = y1-1; y <=y1+1; y++) {
			if ((x == x2) && (y == y2)) {
				flag = true;
			}
		}
	}
	if (flag) {
		return true;
	}
	return false;
}

int main() {
	char ch_x1, ch_x2;
	int x1, x2, y1, y2;
	cin >> ch_x1 >> y1 >> ch_x2 >> y2;
	x1 = (int) ch_x1;
	x2 = (int) ch_x2;
	bool flag = false;
	if (isKing(x1, y1, x2, y2)) {
		cout << "King" << endl;		
		flag = true;		
	}
	if (isQueen(x1, y1, x2, y2)) {
		cout << "Queen" << endl;
		flag = true;		
	}
	if (isRook(x1, y1, x2, y2)) {
		cout << "Rook" << endl;
		flag = true;		
	}
	if (isBishop(x1, y1, x2, y2)) {
		cout << "Bishop" << endl;
		flag = true;		
	}
	if (isKnight(x1, y1, x2, y2)) {
		cout << "Knight" << endl;
		flag = true;		
	}
	if (isPawn(x1, y1, x2, y2)) {
		cout << "Pawn" << endl;		
		flag = true;		
	}
	if (flag == false) {
		cout << "Nobody";
	}
	return 0;
}

