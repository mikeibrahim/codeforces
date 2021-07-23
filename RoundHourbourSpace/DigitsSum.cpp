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
// Let's define 𝑆(𝑥) to be the sum of digits of number 𝑥 written in decimal system. For example, 𝑆(5)=5, 𝑆(10)=1, 𝑆(322)=7.

// We will call an integer 𝑥 interesting if 𝑆(𝑥+1)<𝑆(𝑥). In each test you will be given one integer 𝑛. Your task is to calculate the number of integers 𝑥 such that 1≤𝑥≤𝑛 and 𝑥 is interesting.

// Input
// The first line contains one integer 𝑡 (1≤𝑡≤1000)  — number of test cases.

// Then 𝑡 lines follow, the 𝑖-th line contains one integer 𝑛 (1≤𝑛≤109) for the 𝑖-th test case.

// Output
// Print 𝑡 integers, the 𝑖-th should be the answer for the 𝑖-th test case.

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