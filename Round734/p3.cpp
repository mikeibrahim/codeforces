// https://codeforces.com/contest/1551/problem/B2

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
	int t;
	cin >> t;
	
	while (t--) {
		int n, k; // n: number of elements, k: number of colors
		cin >> n >> k;
		int arr[n], w = 0; // w: number of white colors
		vector<pair<pair<int, int>, vector<int> > > v; // 1: number 2: repeated times 3: color

		// init the array of numbers
		for (int i = 0; i < n; i++) cin >> arr[i];

		// count the number of unique integers
		for (int i = 0; i < n; i++) {
			bool unique = true;
			int len = v.size();
			for (int j = 0; j < len; j++) {
				if (v[j].first.first == arr[i]) {
					unique = false;
					v[j].first.second++;
					v[j].second.push_back(i);
					break;
				}
			}
			if (unique) {
				v.push_back(make_pair(make_pair(arr[i], 1), vector<int>(1, i)));
			}
		}

		int final[n]; // final: final colors for the array
		int cycle = 0; // cycles between k colors
		int wBuffer = k;
		int wCount = 0;
		// sort vector v based on how many times each integer appears
		sort(v.begin(), v.end(), greater<pair<pair<int, int>, vector<int> > >());
		
		for (int i = 0; i < v.size(); i++) { // for each of the unique integers
			// cout << "Num: " << v[i].first.first << " Times: " << v[i].first.second << endl;
			cout << "v[i].first.first-" << v[i].first.first << endl;
			for (int j = 0; j < v[i].second.size(); j++) { // for each of the indices of the integer
				cout << "v[i].second[j]-" << v[i].second[j] << endl;
				cout << "wCount-" << wCount << endl;
				cout << "wBuffer-" << wBuffer << endl;
				cout << "cycle-" << cycle << endl;
				cout << "n-" << n << endl;
				cout << "k-" << k << endl; 
				if (v[i].first.second > wBuffer) {
					v[i].first.second--;
					cout << "Overflow: " << v[i].first.second << " " << wBuffer << endl;
					final[v[i].second[j]] = 0;
					wCount++;
				} else if (v[i].second[j] >= n-n%k+wCount) {
					final[v[i].second[j]] = 0;
					cout << "Last Item: " << v[i].second[j] << endl;
				} else if (cycle == k) {
					cycle = 1;
					cout << "Reset Cycle: " << cycle << endl;
					final[v[i].second[j]] = cycle;
				} else {
					cycle++;
					cout << "Increment Cycle: " << cycle << endl;
					final[v[i].second[j]] = cycle;
				}
				// cout << "B-" << wBuffer << " ";
				cout << endl;
			}
			cout << endl << endl;
		}
		for (int i = 0; i < n; i++) {
			// if (i == 12) cout << 0;
			cout << final[i] << " ";
		}
		cout << endl;
	}
}