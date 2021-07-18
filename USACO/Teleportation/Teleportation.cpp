// http://www.usaco.org/index.php?page=viewproblem2&cpid=807

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
	ifstream cin ("teleport.in");
	ofstream cout ("teleport.out");
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	// 3 scenarios: a -> b; a -> x -> b; a -> y -> b
	int min = abs(a - b); // "magnitude" of going start to finish; so. #1
	min = fmin(min, abs(a - x) + abs(y - b)); // checking if so. #2 is better
	min = fmin(min, abs(a - y) + abs(x - b)); // checking if so. #3 is better

	cout << min << '\n';
}