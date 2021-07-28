// https://codeforces.com/problemset/problem/69/A

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
	// freopen("../IO/input.txt", "r", stdin);freopen("../IO/output.txt", "w", stdout);
	int forces;
	cin >> forces;

	int x_sum = 0, y_sum = 0, z_sum = 0;
	while (forces--) {
		int x, y, z;
		cin >> x >> y >> z;
		x_sum += x;
		y_sum += y;
		z_sum += z;
	}
	if (x_sum == 0 && y_sum == 0 && z_sum == 0) cout << "YES\n";
	else cout << "NO\n";
}