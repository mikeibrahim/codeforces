// https://codeforces.com/problemset/problem/1525/B

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
		int a[n]; // Array of elements
		int min = 0, max = 0;
		bool inOrder = true;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < a[min]) min = i;
			else if (a[i] > a[max]) max = i;
			if (i > 0 && a[i] < a[i - 1]) inOrder = false;
		}

		int numSwaps = 0;
		if (min == 0 && max == n - 1 && !inOrder) numSwaps = 1;
		else if (min != 0 && max == n - 1) numSwaps = 1;
		else if (min == 0 && max != n - 1) numSwaps = 1;
		else if (min != 0 && max != n - 1) numSwaps = 2;
		if (min == n-1 && max == 0) numSwaps = 3;

		// print min and max
		// cout << min << " " << max << " " << n << endl;

		cout << numSwaps << '\n';
	}

}