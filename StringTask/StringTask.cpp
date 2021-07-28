// https://codeforces.com/problemset/problem/118/A

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

bool is_vowel(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
	string str;
	cin >> str;
	int n = str.size();
	// lowercase str
	for (int i = 0; i < n; i++) {
		str[i] = tolower(str[i]);
		if (is_vowel(str[i])) continue;
		cout << "." << str[i];
	}
	cout << endl;
}