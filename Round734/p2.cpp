// https://codeforces.com/contest/1551/problem/B1

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
		string str;
		cin >> str;
		int n = str.length();
		int r = 0, g = 0, w = 0;
		vector<pair<char, int> > v;

		for (int i = 0; i < n; i++) {
			bool unique = true;
			int len = v.size();
			for (int j = 0; j < len; j++) {
				if (v[j].first == str[i]) {
					unique = false;
					v[j].second++;
					break;
				}
			}
			if (unique) {
				v.push_back(make_pair(str[i], 1));
			}
		}
		// print out v
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i].second; j++) {
				if (j >= 2) {
					w++;
				} else if (r <= g) {
					r++;
				} else if (g < r) {
					g++;
				}
			}
			// cout << v[i].first << " " << v[i].second << endl;
		}
		// cout << "r: " << r << " g: " << g << " w: " << w << endl;
		cout << min(r, g) << endl;



		// Count the number of duplicates
		// int d = 0;
		// vector<pair<char, int> > v;
		// // finding each character's duplicates
		// for (int i = 0; i < n; i++) {
		// 	// int count = 0;
		// 	for (int j = 0; j < n; j++) {
		// 		if (str[i] == str[j]) {
		// 			// increment str[i] in v
		// 			for (int k = 0; k < v.size(); k++) {
		// 				if (v[k].first == str[i]) {
		// 					v[k].second++;
		// 					break;
		// 				}
		// 			}
		// 		}
		// 	}
		// 	// if (count > 1 && count > d) {
		// 	// 	d = count;
		// 	// }
		// }
		// int numRed = 0; // number of red tiles
		// // cout << d << endl;


		// for (int i = 0; i < v.size(); i++) {
		// 	cout << v[i].first << " " << v[i].second << endl;
		// }
		// n = n - max(0, (d - 3));
		// cout << (floor(n / 2)) << endl;
	}
}