// https://codeforces.com/contest/1552/problem/C

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

bool intersects(pair<int, int> a, pair<int, int> b) {
	// sort the pairs in ascending order
	if (a.first > a.second) swap(a.first, a.second);
	if (b.first > b.second) swap(b.first, b.second);
	return (a.first < b.first && b.first < a.second && a.second < b.second ||
			b.first < a.first && a.first < b.second && b.second < a.second);

}

int main() {
	freopen("../IO/input.txt", "r", stdin); // Input file
	freopen("../IO/output.txt", "w", stdout); // Output file
	int t;
	cin >> t;

	while (t--) {
		int n, k; // 2n - number of points, k - number of chords
		cin >> n >> k;
		vector<pair<int, int> > chords(k);
		bool points[(2*n)+1];
		for (int i = 0; i < k; i++) {
			cin >> chords[i].first >> chords[i].second;
			points[chords[i].first] = true;
			points[chords[i].second] = true;
		}
		// // print out points[]
		// // for (int i = 1; i <= 2*n; i++) {
		// // 	cout << points[i] << " ";
		// // }
		// // cout << endl;
		// // add chords to the points
		for (int i = 2*n; i > 0; i--) { // foreach new chord i need to draw
			if (!points[i]) { // if the point is not in a chord
				points[i] = true; // add it
				int pt = ceil(i/2.0);
				if (points[pt]) { // if the point is already in a chord
					pt--;
				}
				cout << i << " " << pt << endl;
				chords.push_back(make_pair(i, pt)); // add the chord
				points[pt] = true;
			}
		}
		// count number of intersections between the chords
		int count = 0;
		for (int i = 0; i < n; i++) {
			// cout << "i-" << i << endl;
			for (int j = i+1; j < n; j++) {
				// cout << "j-" << j << endl;
				// cout << chords[i].first << " " << chords[i].second << " | " << chords[j].first << " " << chords[j].second << endl;
				if (intersects(chords[i], chords[j])) {
					count++;
				}
			}
		}
		cout << count << endl;
		// cout << "inter: 8,2 1,5 = " << intersects(make_pair(8, 2), make_pair(1, 5)) << endl;
	}
}