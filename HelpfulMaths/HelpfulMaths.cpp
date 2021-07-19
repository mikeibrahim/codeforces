// https://codeforces.com/problemset/problem/339/A

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
	string equation;
	cin >> equation;

	// vector of ints
	vector<int> numbers;
	//go through the equation and add the numbers to the vector
	for(int i = 0; i < equation.size(); i++) {
		if(equation[i] >= '0' && equation[i] <= '9') {
			numbers.push_back(equation[i] - '0');
		}
	}

	// sort the numbers from least to greatest
	sort(numbers.begin(), numbers.end());

	// for each number in numbers
	for(int i = 0; i < numbers.size(); i++) {
		// if the number is not the first number
		if(i != 0) cout << "+";
		cout << numbers[i];
	}
}