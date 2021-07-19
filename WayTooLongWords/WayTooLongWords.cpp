// https://codeforces.com/problemset/problem/71/A
// 4:00

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
		string str;
		cin >> str;
		
		if (str.length() > 10) {
			// find first and last char of str
			char first = str[0];
			char last = str[str.length() - 1];
			// find number of digits in str
			int numDigits = str.length();
			
			cout << first << (numDigits-2) << last << '\n';
		} else {
			cout << str << '\n';
		}
	}
}