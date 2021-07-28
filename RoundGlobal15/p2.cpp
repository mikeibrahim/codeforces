// https://codeforces.com/contest/1552/problem/B

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

	for (int i = 0; i < t; i++) {
		int n; // number of participants
		cin >> n;
		int a[n][5]; // array of scores
		int winners[n]; // the winner for each race
		
		// init varaibles
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5; j++) cin >> a[i][j];
			winners[i] = 0; // init to 0
		}	
		
		int min = 0; // the index of the participant who had the best score

		// find the min for each collumn
		for (int j = 0; j < 5; j++) {
			// if there is a better score, set the min to that participant's index
			for (int i = 0; i < n; i++) if (a[i][j] < a[min][j]) min = i;
			winners[min]++; // add a poiint to the winner for that race
		}
		bool tie = false; // if there is a tie
		int max = 0; // the index for the participant with the most points for each round
		for (int i = 1; i < n; i++) {
			// if the current participant has more overall points than the current max participant
			if (winners[i] > winners[max]) {
				max = i; // set the max to the current participant
				tie = false; // reset the tie flag
			}
			else if (winners[i] == winners[max]) tie = true; // if there is a tie, set the tie flag
		}

		if (tie) cout << -1 << endl; // if there is a tie, print -1
		else cout << max+1 << endl; // else print the participant's index + 1
	}
}