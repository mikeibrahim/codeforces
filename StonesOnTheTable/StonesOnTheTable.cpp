// https://codeforces.com/problemset/problem/266/A
// 2:59

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
	int len;
	cin >> len;
	string str;
	cin >> str;

	int numAdj = 0;  // Number of adjacents
	// compare two adjacent characters
	for (int i = 0; i < len - 1; i++)
		if (str[i] == str[i + 1]) numAdj++;

	cout << numAdj << '\n';
}