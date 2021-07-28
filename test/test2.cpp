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
	freopen("../IO/input.txt", "r", stdin); // Input file
	freopen("../IO/output.txt", "w", stdout); // Output file
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) cout << "FizzBuzz" << endl;
		else if (i % 3 == 0) cout << "Fizz" << endl;
		else if (i % 5 == 0) cout << "Buzz" << endl;
		else cout << i << endl;
	}
}