#include "Solution1.h"
#include <iostream>

using namespace std;



int Solution1() {

	cout << "RESULTAT SOLUTION 1" << endl;

	int sum = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	return sum;

}