// https://codeforces.com/problemset/problem/1538/A

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

int mymax(int a, int b) {
	return a > b ? a : b;
}
int mymin(int a, int b) {
	return a < b ? a : b;
}

int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t;

	while (t--) {
		int n; // Number of stones
		cin >> n;

		int a[n]; // Array of stones
		int min = 0, max = 0; // Min and max values
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < a[min]) min = i;
			else if (a[i] > a[max]) max = i;
		}
		// print min and max
		// cout << min << " " << max << endl;
		// possible paths to get to the min and max stones
		int left = mymax(min, max) + 1, right = n - mymin(min, max), both = mymin((min + 1) + (n - max), (max + 1) + (n - min));
		// print possible paths
		// cout << left << " " << right << " " << both << endl;
		int minPath = mymin(mymin(left, right), both);
		cout << minPath << endl;
	}
}