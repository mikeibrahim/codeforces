// https://codeforces.com/problemset/problem/1526/A

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
		// Init
		int n;
		cin >> n;
		n*=2;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		// sort a
		sort(a, a + n);
		// Solve
		int a2[n];
		int idx = 0;
		for (int i = 1; i <= n-1; i+=2) {
			a2[i] = a[idx];
			if (i == n-1 && i != 1) {
				a2[i] = a[n-1];
			} else {
				idx++;
			}
		}

		for (int i = 0; i < n-1; idx++, i+=2) {
			a2[i] = a[idx];
		}

		// print a2
		for (int i = 0; i < n; i++) cout << a2[i] << " ";
		cout << endl;
	}
}