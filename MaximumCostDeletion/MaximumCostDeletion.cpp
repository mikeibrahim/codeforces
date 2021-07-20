// https://codeforces.com/problemset/problem/1550/B

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


/*
t - # test cases

n - length of the string of 1's and 0's
a, b - the parameters to the algorithm
s - the string of 1's and 0's

Sample input:
1
3 2 0
000

Operations:
Delete 000
l = 3
Gain points: a * l + b = p
Gain points: 2 * 3 + 0 = 6
Total points = 6

Sample output:
6
*/

// int perform(int a, int l, int b) {
// 	return a * l + b;
// }
// -86
// -64
int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
	int t; // Number of test cases
	cin >> t;

	while (t--) {
		// Read the parameters
		int n, a, b;
		string s;
		cin >> n >> a >> b >> s;

		if (b >= 0) {
			cout << n * (a + b) << endl;
		} else {
			int chunks = 0; // number of groups of 1's and 0's
			for(int i=1;i<n;i++)
				if(s[i]!=s[i-1])
					chunks++;

			cout << (chunks+3)/2*b+a*n << endl;
		}
	}
}