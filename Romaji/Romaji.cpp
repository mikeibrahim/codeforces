// https://codeforces.com/contest/1008/problem/A

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

bool isVowel(char c) {
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
bool isVowelWithN(char c) {
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='n';
}

int main() {
	string str;
	cin >> str;

	bool b = false;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (isVowelWithN(c)) continue;
		// now im only getting consonants
		if (!isVowel(str[i+1])) { // if the letter in front of the consonant is not a vowel
			b = true;
			break;
		}
	}
	
	cout << (b ? "NO\n" : "Yes\n");
}