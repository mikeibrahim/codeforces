// https://codeforces.com/problemset/problem/263/A
// 2:40

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
	
	// go through a 5 by 5 matrix
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// check if the input is a 1
			int num;
			cin >> num;
			if (num == 1) {
				// see how far away the number is from the center
				int center = 5 / 2;
				int distance = abs(center - i) + abs(center - j);
				// return distance, then break
				cout << distance << endl;
				return 0;
			}
		}
	}
}