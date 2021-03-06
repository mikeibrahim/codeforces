// https://codeforces.com/contest/1552/problem/A

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

int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t;

	while (t--) {
		int n; // length of string
		cin >> n;
		string s;
		cin >> s;
		string scpy = s;
		// sort string
		sort(s.begin(), s.end());
		// subtract strings
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] != scpy[i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}