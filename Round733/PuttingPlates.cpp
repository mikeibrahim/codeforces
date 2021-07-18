// https://codeforces.com/contest/1530/problem/B

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
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	// Place plates on a table
	for (int i = 0; i < t; i++) {
		int w, h;
		cin >> w >> h;

		int arr[h][w];
		memset(arr, 0, sizeof arr);

		for (int j = 0; j < w; j++) {
			for (int k = 0; k < h; k++) {
				// 1 means a plate, 0 means empty, Alternate the plate and empty, Make sure plates dont touch diagonally

				bool plate = false;
				// Make the sides first
				if (k == 0) {
					plate = j % 2 == 0;
				} else if (k == h - 1) {
					if (w % 2 == 0) {
						plate = j % 2 == 1;
					} else {
						plate = j % 2 == 0;
					}
				}

				// Then the top and bottom
				if (j == 0) {
					if (h % 2 == 0) { // if the table is even
						plate = (k + 1) % 2 == 0;
					} else { // if the table is odd
						plate = k % 2 == 0;
					}
				} else if (j == w - 1) {
					plate = k % 2 == 0;
				}

				// Corners
				if (w % 2 == 0) { //if the table is even
					if (j == 0 && k == h-1) {
						plate = false;
					} else if (j == w-1 && k == 0) {
						plate = false;
					}
				}
				cout << (plate ? 1 : 0);
			}
			cout << endl;
		}
	}
}