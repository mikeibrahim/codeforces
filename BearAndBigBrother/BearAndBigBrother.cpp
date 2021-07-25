// https://codeforces.com/problemset/problem/791/A

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
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	while (a <= b) {
		a*=3;
		b*=2;
		cnt++;
	}
	cout << cnt << endl;
}