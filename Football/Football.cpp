// https://codeforces.com/problemset/problem/96/A

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
	string str;
	cin >> str;
	int consecutive = 0, n = str.size();
	for (int i = 1; i < n; i++) {
		if (str[i] == str[i - 1]) consecutive++;
		else consecutive = 0;
		if (consecutive == 6) { cout << "YES" << endl; return 0; }
	}
	cout << "NO" << endl;
}