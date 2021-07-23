// https://codeforces.com/problemset/problem/1547/B

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

// solve
int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file

	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		char reqChar = 'a'; // this will increment to compare the inputted string
		int idx = -1;
		// find where 'a' is in the string
		for (int i = 0; i < n; i++) if (s[i] == reqChar) { idx = i; s.erase(i, 1); break; }

		// keep removing the subsequent character in alphabetic order
		while (s != "") {
			// remove the character
			reqChar++;
			// see if the required character is next to the removed one
			if (idx >= 1 && s[idx - 1] == reqChar) {
				// remove the character
				s.erase(idx - 1, 1);
				// set that to be the index
				idx -= 1;
			} else if (idx < s.size() && s[idx] == reqChar) {
				// remove the character
				s.erase(idx, 1);
			} else {
				// no match
				cout << "NO" << endl;
				break;
			}
		}
		if (s == "") cout << "YES" << endl;
	}
}