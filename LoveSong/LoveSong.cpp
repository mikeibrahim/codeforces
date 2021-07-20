// https://codeforces.com/problemset/problem/1539/B

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
	int l, n; // l - length of the string, n - number of questions
	string str;
	cin >> l >> n >> str;

	// turn the string into prefix sum array
	int prefix_sum[l];
	for (int i = 0; i < l; i++) prefix_sum[i] = (str[i] - 'a' + 1) + (i > 0 ? prefix_sum[i-1] : 0);

	while (n--) {
		int s, e; // s - start index, e - end index
		cin >> s >> e;
		cout << ((s==1 ? prefix_sum[e-1] : prefix_sum[e-1] - prefix_sum[s-2])) << endl;
	}
}