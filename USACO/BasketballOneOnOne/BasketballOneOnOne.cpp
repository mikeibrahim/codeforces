// https://open.kattis.com/contests/mcpc19open/problems/basketballoneonone

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
	string g;
	cin >> g;

	int as = 0, bs = 0;
	for (int i = 0; i < g.length() - 1; i+=2) {
		char n = g[i], s = g[i+1];
		if (n == 'A') as += s;
		else bs += s;
		cout << "Checking: " << n << "\n";
	}

	cout << (as > bs ? 'A' : 'B') << '\n';


	// BETTER SOLUTION:  cout << g[g.size()-2];
}