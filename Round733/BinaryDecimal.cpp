// https://codeforces.com/contest/1530/problem/A

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
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;

		vector<int> arr;
		for (int i = 0; num > 0; i++) {
			arr.push_back(num % 10);
			num /= 10;
		}

		int amt = 0;
		int max = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] > max) {amt = arr[i]; max = arr[i];}
		}
		cout << amt << '\n';
	}

}