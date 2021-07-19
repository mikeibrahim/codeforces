// https://codeforces.com/contest/478/problem/A
// 25:00 (20 minutes of debugging)

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
	vector<int> numbers;

	// while the cin doesnt return a newline, add number to vecotr
	while(cin.peek() != '\n') {
		int num;
		cin >> num;
		numbers.push_back(num);
	}

	// get the length of the vector
	int length = numbers.size();
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += numbers[i];
	}

	// if the sum can be divided by the length AND the sum mod length == 0, then print the result
	if (sum % length == 0 && sum != 0) {
		int result = sum / length;
		cout << result << endl;
	} else {
		cout << "-1" << endl;
	}
}