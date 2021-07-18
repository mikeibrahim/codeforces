// https://codeforces.com/contest/1530/problem/C

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
	int t; // Number of test cases
	cin >> t;

	while (t--) {
		int n; // Number of rounds
		cin >> n;

		vector<int> a(n), b(n); // Points for each round

		// Retrieve the inputs for a and b
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)  cin >> b[i];

		sort(a.begin(), a.end()); // sort a in ascending order
		sort(b.rbegin(), b.rend()); // sort b in descending order

		int k = n - n/4; // Number of rounds to consider

		int sa = a[0], sb = b[0];
		// Sum of a and b with respect to k allocated rounds 
		// (It is k instead of k-1 rounds since we want to subtract +1 more index above so we have a complete range of k items)
		if (n > 1) { // If there is more than one round
			// Greatest value being on the left side (easier to index)
			for (int i = 1; i < n; i++) a[i] += a[i - 1];
			for (int i = n - 2; i >= 0; i--) b[i] += b[i + 1];
			int refa = (k >= n) ? 0 : a[n-k-1];
			int refb = (k >= n) ? 0 : b[k];
			
			sa = a[n-1] - refa;
			sb = b[0] - refb;
		}

		// print vectors a and b
		// cout << "a: ";
		// for (int i = 0; i < n; i++) cout << a[i] << " ";
		// cout << endl;
		// cout << "b: ";
		// for (int i = 0; i < n; i++) cout << b[i] << " ";
		// cout << endl;

		// Minimum number of additional rounds to win
		int m = 0;

		while (sa < sb) {
			// Generating new round values
			n++; // Add one more round
			m++; // Add one more additional round
			k = n - n/4; // Number of rounds to consider
			
			// Change the array
			a.push_back(100 + a[n-2]); // Insert 100 + sums of previous rounds (to stick with the prefix sum algorithm) to beginning of a
			// Push 0 to end of b (no changing of the array is neccessary
			// due to how the rest of the array doesnt change because that would be like adding 0 to all of them)
			b.push_back(0);

			// Change the sum
			int refa = (k >= n) ? 0 : a[n-k-1];
			int refb = (k >= n) ? 0 : b[k];
			// print refa
			// print refb
			// cout << refa << " " << refb << endl;
			
			sa = a[n-1] - refa;
			sb = b[0] - refb;

			// print sa
			// print sb
			// cout << "S: " << sa << " " << sb << endl;
		}
		cout << m << endl;
	}
}