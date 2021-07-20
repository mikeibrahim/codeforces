// https://codeforces.com/problemset/problem/1550/A

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
		int n; // the required sum of the elements
		cin >> n;
		int sum = 0; // the sum of the elements
		// vector<int> arr; // the elements
		int last = -1; // the last element
		int size = 0;

		while (sum < n) {
			int amount = last;
			while (sum + amount < n && amount - last < 2) amount++; 
			// arr.push_back(amount);
			last = amount;
			sum += amount;
			size++;
		}

		cout << size << endl;
	}
}