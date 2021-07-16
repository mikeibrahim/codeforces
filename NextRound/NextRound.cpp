// https://codeforces.com/problemset/problem/158/A
// 14:06

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
	int t, k;
	cin >> t >> k;
	vector<int> f;
	for (int i = 0; i < t; i++) {
		int s;
		cin >> s;
		f.push_back(s);
	}

	int a = 0;
	for (int i = 0; i < t; i++) {
		if (f[i] >= f[k-1] && f[i] > 0) a++;
	}
	cout << a << '\n';
}