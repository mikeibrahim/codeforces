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
// int main() {
// 	int t;
// 	cin >> t;

// 	// For each of the test cases
// 	while (t--) {
// 		int completed; // Number of completed rounds
// 		cin	>> completed;
// 		vector<int> myPointsVec;// Vector of my points
// 		vector<int> oppPointsVec;// Vector of opp points

// 		// For each of the completed rounds
// 		// Get my points
// 		for (int j = 0; j < completed; j++) {
// 			int p; // My points
// 			cin >> p;
// 			myPointsVec.push_back(p);
// 		}
// 		// Get opp points
// 		for (int j = 0; j < completed; j++) {
// 			int	p; // Opp points
// 			cin >> p;
// 			oppPointsVec.push_back(p);
// 		}
// 		// Have greatest points first
// 		sort(myPointsVec.rbegin(), myPointsVec.rend());
// 		sort(oppPointsVec.rbegin(), oppPointsVec.rend());

// 		// get the greatest points using this rule: completed - completed/4
// 		int stages = completed - completed/4;
// 		// Get my average points from the myPointsVec using the stages
// 		int myAvgPoints = accumulate(myPointsVec.begin(), myPointsVec.begin() + stages, 0);
// 		// Get opp average points from the oppPointsVec using the stages
// 		int oppAvgPoints = accumulate(oppPointsVec.begin(), oppPointsVec.begin() + stages, 0);

// 		// Find the minimum number of additional rounds to win
// 		int min	= 0;
// 		while (myAvgPoints < oppAvgPoints) {

// 		}

// 		cout << "MIN: " << min << endl;
// 	}
// }
/*
1
5
1 2 3 4 5
1 2 3 4 5
*/


int main() {
	freopen("../IO/input.txt", "r", stdin); // Input file
	freopen("../IO/output.txt", "w", stdout); // Output file
	int t; // Number of test cases
	cin >> t;

	while (t--) {
		int n; // Number of rounds
		cin >> n;

		vector<int> a(n), b(n); // Points for each round

		// Retrieve the inputs for a and b
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++)  cin >> b[i];

		// Sort a and b in descending order
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());

		// cout << endl;
		// cout << "A&B: " << endl;
		// for (int i = 0; i < n; i++) cout << a[i] << " ";
		// cout << endl;
		// for (int i = 0; i < n; i++) cout << b[i] << " ";
		// cout << endl;
		// cout << endl;

		// a = [140, 90, 50, 20]
		// b = [400, 300, 200, 100]
		// How do you get the sum?
		// You start at the beginning a[0] and b[0], then subtract a[k] and b[k] from those to isolate that area of the array.
		// Example: a[0] ||| 140 (The sum of all the numbers).
		// We want k number of scores from greatest to least, so we subtract a[k] (all the previous, lower values) from a[0] (the total).
		
		//print a and b
		// cout << "[PS] A&B: " << endl;
		// for (int i = 0; i < n; i++) cout << a[i] << " ";
		// cout << endl;
		// for (int i = 0; i < n; i++) cout << b[i] << " ";
		// cout << endl;
		// cout << endl;

		int k = n - n/4; // Number of rounds to consider
		//print k
		// cout << "K: " << k << endl;

		int sa = a[0], sb = b[0];
		// Sum of a and b with respect to k allocated rounds 
		// (It is k instead of k-1 rounds since we want to subtract +1 more index above so we have a complete range of k items)
		if (n > 1) { // If there is more than one round
			// Greatest value being on the left side (easier to index)
			for (int i = n - 2; i >= 0; i--) a[i] += a[i + 1];
			for (int i = n - 2; i >= 0; i--) b[i] += b[i + 1];
			sa = a[0] - a[k];
			sb = b[0] - b[k];
		}

		// print sums
		// cout << "Sums: " << sa << " " << sb << endl;
		// cout << endl;


		// Minimum number of additional rounds to win
		int m = 0;

		while (sa < sb) {
			// Generating new round values
			n++; // Add one more round
			m++; // Add one more additional round
			k = n - n/4; // Number of rounds to consider
			
			// Change the array
			a.insert(a.begin(), 100 + a[0]); // Insert 100 + sums of previous rounds (to stick with the prefix sum algorithm) to beginning of a
			// Push 0 to end of b (no changing of the array is neccessary
			// due to how the rest of the array doesnt change because that would be like adding 0 to all of them)
			b.push_back(0);

			// Change the sum
			sa = a[0] - a[k];
			sb = b[0] - b[k];
			// Simulates the truncation of when (int)k gets divided by (int)4
			// (it only subtracts a round when k is divisible by 4, otherwise it rounds down)
			// if (n % 4 == 0) {
			// 	// value of kth index from end of array
			// 	sa 
			// }
		}
		cout << m << endl;

		// // Init a and b
		// for (int i = 0; i < n; i++) cin >> a[i];		
		// for (int i = 0; i < n; i++) cin >> b[i];

		// // Reverse Sorting
		// sort(a.rbegin(), a.rend()); sort(b.rbegin(), b.rend());
		
		// int k = n - n/4; // Number of rounds to consider

		// // Get my average points from the a & b using the k
		// int sa = accumulate(a.begin(), a.begin() + k, 0);
		// int sb = accumulate(b.begin(), b.begin() + k, 0);

		// int m = 0; // Number of additional rounds to win
		// // Traverse through more rounds until sa >= sb
		// while (sa < sb) {
		// 	n++; // Add one more round
		// 	m++; // Add one more additional round
		// 	k = n - n/4; // Number of rounds to consider

		// 	a.insert(a.begin(), 100); // Insert 100 to beginning of my points
		// 	b.push_back(0); // Push 0 to end of opp points

		// 	sa += 100; // Add 100 to my average points

		// 	///// IDK how to retrieve the opp points if k increases to another digit /////

		// 	// If the number of rounds is divisible by 4, subtract the nth index from the sums of a and b
		// 	if (n % 4 == 0) {
		// 		sa -= a[k];
		// 		sb -= b[k];
		// 	}
		// }
		// cout << m << endl;
	}
}



/*
1
2
40 78
82 67
n = 4
a = [20, 30, 40, 50]
b = [100, 100, 100, 100]

sort a & b
a = [50, 40, 30, 20]
b = [100, 100, 100, 100]

k = n - n / 4 ||| 4 - 4 / 4 ||| 3 // The first 3 stages will be added to the sum (inclusive)
sa = [50, 40, 30, -- 20] = 120
sb = [100, 100, 100, -- 100] = 300


L = while (sa < sb)
L {
	n++ ||| 5
	m++ ||| 1
	k = n - n / 4 ||| 5 - 5 / 4 ||| 4

	a.insert(100) // This is so that we know where to delete
	b.push(0) // This is so that we know where to delete

	// The * means that we are just looking at the value of the array
	*a = [100, 50, 40, 30,-- 20]
	*b = [100, 100, 100, 100,-- 0]

	// The Old Method
	sa = [100, 50, 40, 30, -- 20] = 220
	sb = [100, 100, 100, 100, -- 0] = 400

	// The New Method
	sa += 100 = 220
	sb += 0 = 400 // redundant

	if (n % 4 == 0) {
		sa -= a[k]
		sb -= b[k]
	}
}
L {
	n++ ||| 6
	m++ ||| 2
	k = n - n / 4 ||| 6 - 6 / 4 ||| 5

	a.insert(100)
	b.push(0)

	*a = [100, 100, 50, 40, 30,-- 20]
	*b = [100, 100, 100, 100, 0,-- 0]

	// The Old Method
	sa = [100, 100, 50, 40, 30,-- 20] = 320
	sb = [100, 100, 100, 100, 0,-- 0] = 400

	// The New Method
	sa += 100 = 320
	sb += 0 = 400 // redundant

	if (n % 4 == 0) {
		sa -= a[k]
		sb -= b[k]
	}
}
L {
	n++ ||| 7
	m++ ||| 3
	k = n - n / 4 ||| 7 - 7 / 4 ||| 6

	a.insert(100)
	b.push(0)

	*a = [100, 100, 100, 50, 40, 30,-- 20]
	*b = [100, 100, 100, 100, 0, 0,-- 0]

	// The Old Method
	sa = [100, 100, 100, 50, 40, 30, 20] = 420
	sb = [100, 100, 100, 100, 0, 0, 0] = 400

	// The New Method
	sa += 100 = 420
	sb += 0 = 400 // redundant

	if (n % 4 == 0) {
		sa -= a[k]
		sb -= b[k]
	}
}
L {
	n++ ||| 8
	m++ ||| 4
	k = n - n / 4 ||| 8 - 8 / 4 ||| 6

	a.insert(100)
	b.push(0)

	*a = [100, 100, 100, 100, 50, 40,-- 30, 20]
	*b = [100, 100, 100, 100, 0, 0,-- 0, 0]

	// The Old Method
	sa = [100, 100, 100, 100, 50, 40,-- 30, 20] = 490
	sb = [100, 100, 100, 100, 0, 0,-- 0, 0] = 400

	// The New Method
	sa += 100 = 490
	sb += 0 = 400 // redundant

	if (n % 4 == 0) {
		sa -= a[k]
		sb -= b[k]
	}
}
L {
	n++ ||| 9
	m++ ||| 5
	k = n - n / 4 ||| 9 - 9 / 4 ||| 7
	
	a.insert(100)
	b.push(0)

	*a = [100, 100, 100, 100, 100, 50, 40,-- 30, 20]
	*b = [100, 100, 100, 100, 0, 0, 0,-- 0, 0]

	// The Old Method
	sa = [100, 100, 100, 100, 100, 50, 40,-- 30, 20] = 590
	sb = [100, 100, 100, 100, 0, 0, 0,-- 0, 0] = 400

	// The New Method
	sa += 100 = 590
	sb += 0 = 400 // redundant

	if (n % 4 == 0) {
		sa -= a[k]
		sb -= b[k]
	}
}
cout << min
*/