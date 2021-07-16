// https://codeforces.com/contest/2/problem/A
// come back to this when you are smarter

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

// find total for specific name
int findTotal(vector<pair<pair<string, int>, int> > names, string name) {
	int total = 0;
	for (int i = 0; i < names.size(); i++) {
		if (names[i].first.first == name) total += names[i].first.second;
	}
	return total;
}

int main() {
	int n;
	cin >> n;

	// make the totals be in each round
	vector<pair<pair<string, int>, int> > names;
	for (int i = 0; i < n; i++) {
		string name;
		int score;
		cin >> name >> score;
		names.push_back(make_pair(make_pair(name, score), 0));
		names[i] = make_pair(make_pair(name, score), findTotal(names, name));
	}

	// finding winner
	string winner = names[0].first.first;
	int max = names[0].second;
	for (int i = 0; i < n; i ++) {
		if (names[i].second > max) {
			winner = names[i].first.first;
			max = names[i].second;
		}
	}

	cout << winner << '\n'; 
}