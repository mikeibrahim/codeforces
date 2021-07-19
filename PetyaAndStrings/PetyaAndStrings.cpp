// https://codeforces.com/problemset/problem/112/A
// 8:00

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
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	// make the strings lowercase 
	for (int i = 0; i < str1.size(); i++) {
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
	}

	// print 0 if strings are equal, 1 if first is greater, -1 if second is greater
	int result = 0;
	if (str1 < str2) {
		result = -1;
	} else if (str1 > str2) {
		result = 1;
	}

	cout << result << endl;
}