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

int main() {
	// freopen("../IO/input.txt", "r", stdin); // Input file
	// freopen("../IO/output.txt", "w", stdout); // Output file
    int t;
    cin >> t;
 
    while (t--) {
        long long n, m, x;
		cin >> n >> m >> x;

		long long xPos = ceil((double)x/n);
		long long yPos = x % n;
		if (yPos == 0) yPos = n;
		long long xFactor = (n-1) * -1;
		long long yFactor = m-1;
		long long diff = ((xPos-1) * xFactor) + ((yPos-1) * yFactor);
		cout << (x + diff) << endl;
    }
}