// https://codeforces.com/contest/894/problem/A

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();

	int t = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] != 'A') continue;

		int l = 0, r = 0;
		for (int j = i; j >= 0; j--) {
			if (str[j] == 'Q') l++;
		}
		for (int k = i; k < len; k++) {
			if (str[k] == 'Q') r++;
		}

		t += l * r;
	}

	cout << t << '\n';
}