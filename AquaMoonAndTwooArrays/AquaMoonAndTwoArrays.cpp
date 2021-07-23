// https://codeforces.com/problemset/problem/1546/A

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
		// Read input
		int n;
		cin >> n; // size of the arrays
		int a[n], b[n];

		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];

		vector<int> a_add; // indicies of a that need to be increased [0, 0]
		vector<int> a_sub; // indicies of a that need to be decreased [1, 2]

		for (int i = 0; i < n; i++) {
			if (a[i] < b[i]) {
				// cout << "A[" << i << "] is less" << endl;
				for (int j = 0; j < b[i] - a[i]; j++) {	
					a_add.push_back(i);
					// cout << "Pushing back; " << i << endl;
				}
			} else if (a[i] > b[i]) {
				// cout << "A[" << i << "] is greater" << endl;
				for (int j = 0; j < a[i] - b[i]; j++) {
					a_sub.push_back(i);
					// cout << "Pushing back: " << i << endl;
				}
			}
		}

		// swap indicies of a with a_add and a_sub
		int a_add_size = a_add.size();
		int a_sub_size = a_sub.size();

		if (a_add_size != a_sub_size) { cout << -1 << endl; continue; } // if unequal amount of 

		for (int i = 0; i < a_add_size; i++) {
			int index = a_add[i];
			a[index]++;
			int index2 = a_sub[i];
			a[index2]--;
		}
		// output
		cout << a_add_size << endl;
		for (int i = 0; i < a_add_size; i++) {
			cout << a_sub[i] + 1 << " " << a_add[i] + 1 << endl;
		}
	}
}