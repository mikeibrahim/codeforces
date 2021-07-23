// https://codeforces.com/contest/1553/problem/B

// Dependencies
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

bool checkChip(string str1, string str2, string str3, int i, int len) {
	if (str1[i] == str2[0]) { // possible start position
		for (int j = i; j <= len; j++) { // check for moves to the right

			// print i, j, str1[i], str2[j], str3[j]
			// cout << "i-" << i << endl;
			// cout << "j-" << j << endl;
			// cout << "str1[j-2]-" << str1[j - 2] << endl;
			// cout << "str2[j-i]-" << str2[j - i] << endl;
			// if the next character in str2 is one behind the current character in str1, try moving to left
			if (str1[j-2] == str2[j-i]) {
				string str4 = str3;
				for (int k = j - 2; k >= 0; k--) {
					// check if equal and string length is not over str2 length
					// cout << "k-" << k << endl;
					if (str1[k] == str2[j-i+j-k-2] && str4.length() < str2.length()) {
						str4 += str1[k];
					} else {
						break;
					}
					// cout << "str4-" << str4 << endl;
					// cout << "str2-" << str2 << endl;
					if (str4 == str2) {
						return true;
					}
				}
			}
			// cout << endl;

			if (j < len && str1[j] == str2[j-i] && str3.length() < str2.length()) {
				// concatinate the string
				str3 += str1[j];
			} else { // you hit a non-matching character
				// Move left
				// concatinate the rest of the string
				for (int k = j - 2; k >= 0; k--) {
					// check if equal and string length is not over str2 length
					if (str1[k] == str2[j-i+j-k-2] && str3.length() < str2.length()) {
						str3 += str1[k];
					} else {
						return (str3 == str2);
					}
				}
			}
		}
	}
	return (str3 == str2);
}

int main() {
	freopen("../IO/input.txt", "r", stdin); // Input file
	freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t;
	while (t--) {
		string str1, str2;
		cin >> str1 >> str2;
		int len = str1.length();
		// check to see if i can make a substring of str1 into str2
		string str3 = "";
		bool can = false;
		for (int i = 0; i < len; i++) { // check for start position of the chip
			// call checkChip
			if (checkChip(str1, str2, str3, i, len)) {
				can = true;
				break;
			}
		}
		// cout can
		cout << (can ? "YES" : "NO") << endl;
	}
}