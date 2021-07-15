// https://codeforces.com/contest/1472/problem/A

#include <iostream>
using namespace std;


bool canCut(int w, int h, int n, int currN) {
	if (currN >= n) { return true; }
	else if (w % 2 == 0) {
		return canCut(w / 2, h, n, currN * 2);
	} else if (h % 2 == 0) {
		return canCut(w, h / 2, n, currN * 2);
	}
	return false;
}

int main() {
	int a;
	cin >> a;
	int w, h, n;

	for (int i = 0; i < a; i++) {
		cin >> w >> h >> n;

		cout << (canCut(w, h, n, 1) ? "YES" : "NO") << '\n';
	}
}