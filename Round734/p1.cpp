// https://codeforces.com/contest/1551/problem/A

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
		int n;
		cin >> n;
		int a = 0, b = 0;

		a = floor(n / 3.0);
		b = ceil(n / 3.0);
		cout << ((a + b*2 == n) ? a : b) << " " << ((a + b*2 == n) ? b : a) << endl;
		// cout << a << " " << b << endl;
	}
}