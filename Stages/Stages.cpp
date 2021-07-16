// https://codeforces.com/contest/1011/problem/A

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


int value(char c) {
	return c - 'a' + 1;
}

string sort(string parts, int size) {
	for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            int char1 = value(parts[j]);
            int char2 = value(parts[j+1]);
            
            if (char1 > char2) {
                int temp = parts[j];
                parts[j] = parts[j + 1];
                parts[j + 1] = temp;
            }
        }
    }
	return parts;
}

int main() {
	// i = number of avalible stages
	// i = number of stages that can be used in the rocket
	int avalible, max;
	cin >> avalible >> max;
	string parts;
	cin >> parts;

	int weight = 0;
	parts = sort(parts, avalible);

	// cout << "Sorted String: " << parts << "\n";
	int count = 0;
	// int myMax = max;
	for (int i = 0; i < max; i++) {
		if (parts[i] == 0) break;
		if (value(parts[i]) - value(parts[i-1]) < 2) {
			// cout << "Skipping: " << parts[i] << " - " << parts[i-1] << "\n";
			// myMax++;
			parts.erase(i, 1);
			i--;
			continue;
		}
		
		weight += value(parts[i]);
		count++;
		// cout << "Char: " << parts[i] << "  Value: " << value(parts[i]) << "\n";
	}

	if (count < max) weight = -1;

	cout << weight << "\n";
	// o = the minimal weight of the rocket
}