// https://codeforces.com/problemset/problem/231/A
// 4:29

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
	int n;
	cin >> n;

	int total = 0;

	for (int i = 0; i < n; i++) {
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		int numSure = p1 + p2 + p3;
		if (numSure >= 2) total++;
	}

	cout << total << '\n';
}