// https://codeforces.com/problemset/problem/50/A
// 14:17

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

int findArea(int w, int h) {
	int numW = floor(w/2);
	int stacked = numW * h;
	if (w%2==1) stacked += floor(h/2);
	return stacked;
}

int main() {
	int m, n;
	cin >> m >> n;

	int mSIde = findArea(m, n), nSide = findArea(n, m);
	int d = max(mSIde, nSide);

	cout << d << '\n';
}