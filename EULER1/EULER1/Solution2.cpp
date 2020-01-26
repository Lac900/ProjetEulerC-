#include "Solution2.h"
#include <iostream>

using namespace std;

bool isEven(int number) {
	return  !( number % 2);
}


int Solution2()
{
	cout << "RESULTAT SOLUTION 2" << endl;

	int x1 = 1, x2 = 2, sum = 0;

	while (x2 < 4000000) {
		if (isEven(x2)) {
			sum += x2;
		}
		int x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}

	return sum;
}
