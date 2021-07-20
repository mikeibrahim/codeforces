// https://codeforces.com/problemset/problem/1542/A

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
	freopen("../IO/input.txt", "r", stdin); // Input file
	freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t; // Number of test cases

	while (t--) {
		int n; // Number of elements
		cin >> n;
		int a[n*2]; // Array of elements
		int odd = 0, even = 0; // Number of odd and even elements
		for (int i = 0; i < n*2; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) even++;
			else odd++;

		}
		string ans = "NO";
		if (odd == even) ans = "YES";
		
		cout << ans << endl;
	}

}