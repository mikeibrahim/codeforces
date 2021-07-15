// https://codeforces.com/contest/1047/problem/A

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int coins[num];
	int pockets[num][num];

	for (int j = 0; j < num; j++) {
		for (int k = 0; k < num; k++) {
			pockets[j][k] = 0;
		}
	}

	for (int i = 0; i < num; i++) { // foreach coin
		cin >> coins[i];
		int coin = coins[i];
		for (int j = 0; j < num; j++) { // pockets
			for (int k = 0; k < num; k++) { // index of pocket
				if (coin == pockets[j][k]) {
					// cout << "Broke with: " << coin << "\n";
					j++;
					k = -1;
					continue;
				}
				if (pockets[j][k] == 0) {
					pockets[j][k] = coin;
					j = num;
					break;
				}
			}
		}
	}

	int numPockets = 0;
	for (int j = 0; j < num; j++) {
		if (pockets[j][0] > 0) {
			numPockets = j + 1;
		}
	}

	// for (int j = 0; j < num; j++) {
	// 	cout << "ARRAY ROW:  ";
	// 	for (int k = 0; k < num; k++) {
	// 		cout << pockets[j][k] << " ";
	// 	}
	// 	cout << "\n";
	// }

	cout << numPockets << "\n";
}