// https://codeforces.com/contest/1530/problem/C

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


// Find the smallest number of additional stages required for my result to beat the opponent's result.
int main() {
	int t;
	cin >> t;

	// For each of the test cases
	while (t--) {
		int completed; // Number of completed rounds
		cin	>> completed;
		vector<int> myPointsVec;// Vector of my points
		vector<int> oppPointsVec;// Vector of opp points

		// For each of the completed rounds
		for (int j = 0; j < completed; j++) {
			int p; // My points
			cin >> p;
			myPointsVec.push_back(p);
		}
		for (int j = 0; j < completed; j++) {
			int	p; // Opp points
			cin >> p;
			oppPointsVec.push_back(p);
		}

		sort(myPointsVec.rbegin(), myPointsVec.rend());
		sort(oppPointsVec.rbegin(), oppPointsVec.rend());


		// Find the minimum number of additional rounds to win
		int min	= 0;
		while (true) {
			int size = myPointsVec.size();;
			int mySum = 0;
			int oppSum = 0; // sum of opponent's points
			int numViewed = size - size / 4;
			for (int k = 0; k < numViewed; k++) {
				mySum += myPointsVec[k];
				oppSum += oppPointsVec[k];
			}
			// If my sum is greater than opp, then I win
			if (mySum >= oppSum) {
				break;
			} else {
				min++;
				myPointsVec.insert(myPointsVec.begin(), 100);
				oppPointsVec.push_back(0);
			}
		}
		cout << min << endl;
	}
}