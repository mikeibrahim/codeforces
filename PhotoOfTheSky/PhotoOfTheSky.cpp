// https://codeforces.com/contest/1012/problem/A
// Come back to when you're smarter

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
	int numPairs;
	cin >> numPairs;

	int xys[numPairs*2];

	// Init value
	for (int t = 0; t < numPairs*2; t++) cin >> xys[t];

	// Sort from least to greatest
	sort(xys, xys + 2 * numPairs);

	// Make coordinates
	vector<pair<int, int> > coordinates;

	for (int i = 0; i < numPairs; i++) {
		coordinates.push_back(make_pair(xys[i], xys[i+numPairs]));
	}

	// find area
	// pair<int, int> min = coordinates[0], max = coordinates[0];
	int minX = coordinates[0].first, minY = coordinates[0].second, maxX = coordinates[0].first, maxY = coordinates[0].second;

	for (int i = 0; i < numPairs; i++) {
		if (coordinates[i].first < minX) minX = coordinates[i].first;
		else if (coordinates[i].first > maxX) maxX = coordinates[i].first;

		if (coordinates[i].second < minY) minY = coordinates[i].second;
		else if (coordinates[i].second > maxY) maxY = coordinates[i].second;
	}

	long long x = maxX - minX;
	long long y = maxY - minY;
	long long area = x * y;

	cout << area << '\n'; 
}