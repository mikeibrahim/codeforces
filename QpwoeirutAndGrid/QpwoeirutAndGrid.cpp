// https://codeforces.com/gym/329411/problem/C

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
	cin >> t;

	while (t--) {
		int n; // Number of elements
		cin >> n;
		int arr1[n], arr2[n]; // two arrays to store the numbers
		for (int i = 0; i < n; i++) {
			cin >> arr1[i];
			// Make array into prefix sums
			if (i > 0) arr1[i] += arr1[i - 1];
		}
		for (int i = 0; i < n; i++) {
			cin >> arr2[i];
			// Make array into prefix sums
			if (i > 0) arr2[i] += arr2[i - 1];
		}
		// Problem: Find the number of ways to divde the two arrays so that both parts are equal
		int ans = 0;
		
	}
}