#include "Solution4.h"
#include <iostream>
#include <string>

using namespace std;

bool compareInverse(string S1, string S2) {

	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != S2[S1.length() - 1 - i]) {
			return false;
		}
	}
	return true;
}

bool IsPalindrome(string value) {
	int len = value.length();
	if ( len % 2 ) {
		return false;
	}
	string part1 = value.substr(0,(len / 2));
	string part2 = value.substr((len / 2));
	return compareInverse(part1, part2);
}

int Solution4()
{
	cout << "RESULTAT SOLUTION 4" << endl;

	int result = 0;

	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--) {
			int nbr = (i * j);
			string number = to_string(nbr);
			if (IsPalindrome(number)) {
				result = result < nbr ? nbr : result;
			}
		}
	}
	return result;
}
