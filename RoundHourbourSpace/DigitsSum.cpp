// URL

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


// CONTEXT:
// Let's define ๐(๐ฅ) to be the sum of digits of number ๐ฅ written in decimal system. For example, ๐(5)=5, ๐(10)=1, ๐(322)=7.

// We will call an integer ๐ฅ interesting if ๐(๐ฅ+1)<๐(๐ฅ). In each test you will be given one integer ๐. Your task is to calculate the number of integers ๐ฅ such that 1โค๐ฅโค๐ and ๐ฅ is interesting.

// Input
// The first line contains one integer ๐ก (1โค๐กโค1000)  โ number of test cases.

// Then ๐ก lines follow, the ๐-th line contains one integer ๐ (1โค๐โค109) for the ๐-th test case.

// Output
// Print ๐ก integers, the ๐-th should be the answer for the ๐-th test case.

// Solution: 

int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;

		long long ans = 0;
		if (n == 9) ans = 1;
		else if (n > 9 && n % 10 != 9) ans = n / 10;
		else if (n % 10 == 9) ans = n / 10 + 1;

		cout << ans << '\n';
	}
}