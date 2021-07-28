// https://codeforces.com/problemset/problem/266/B

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
	int len, n; // Length of the queue, number of iterations
	cin >> len >> n;
	string str; // the queue
	cin >> str;

	// Solve:
	while (n--) {
		for (int i = 0; i < len; i++) {
			if (str[i] == 'B' && str[i + 1] == 'G') {
				str[i] = 'G';
				str[i + 1] = 'B';
				i++;
			}
		}
	}
	cout << str << endl;

}