// URL

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
#include <stdio.h>
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
		int l = 0;
		cin >> l;
		int a[l];
		for (int j = 0; j < l; j++) {
			a[j] = j;
			bool e = l % 2 == 0;
			if (j == 0) a[0] = e ? 2 : 3;
			else if (j == 1) a[1] = 1;
			else if ((e && j % 2 == 0) || (!e && j % 2 == 1)) a[j] = j + 2;
			cout << a[j] << " ";
		}
		cout << "\n";
	}
}