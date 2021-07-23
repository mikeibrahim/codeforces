// https://codeforces.com/problemset/problem/1547/A

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
		int ax, ay, bx, by, fx, fy;
		cin >> ax >> ay >> bx >> by >> fx >> fy;

		int changeX = abs(ax - bx), changeY = abs(ay - by);

		// print changes
		// cout << changeX << " " << changeY << endl;
		bool inlineX = (ax == bx && ax == fx && bx == fx),
			inlineY = (ay == by && ay == fy && by == fy),
			inbetweenX = ((ax < fx && fx < bx) || (ax > fx && fx > bx)),
			inbetweenY = ((ay < fy && fy < by) || (ay > fy && fy > by));

		// print bools
		// cout << inlineX << " " << inlineY << " " << inbetweenX << " " << inbetweenY << endl;
		if ((inlineX && inbetweenY) || (inlineY && inbetweenX)) {
			cout << (changeX + changeY + 2) << endl;
		} else {
			cout << (changeX + changeY) << endl;
		}
	}
}