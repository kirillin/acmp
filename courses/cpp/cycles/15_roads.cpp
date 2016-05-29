/*
	Problem N15
	roads
	acmp.ru
	Artemov Kirill
*/
#include <iostream>

using namespace std;

int main() {
	int n;
	int is_road, count_of_roads;
	cin >> n;
	count_of_roads = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cin >> is_road;
			if ((j >= i) && (is_road == 1)) {
				count_of_roads++;
			}
		}
	}
	cout << count_of_roads;
	return 0;
}