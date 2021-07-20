// https://codeforces.com/problemset/problem/236/A
// 6:00

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
	string str;
	cin >> str;

	vector<char> distinct; // Distinct characters

	// find number of distinct characters
	for (int i = 0; i < str.size(); i++) {
		if (find(distinct.begin(), distinct.end(), str[i]) == distinct.end()) {
			distinct.push_back(str[i]);
		}
	}
	// if number of distinct is even, then it is a girl
	if (distinct.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
	// if the string is odd
	else cout << "IGNORE HIM!" << endl;
	
		
}