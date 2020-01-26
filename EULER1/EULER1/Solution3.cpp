#include "Solution3.h"
#include <iostream>

using namespace std;


bool IsPrime(__int64 number)
{
	__int64 root = __int64(sqrt(number));
	for (__int64 i = 2; i <= root; i++)
	{
		if (number%i == 0)
			return false;
	}
	return true;
}

bool IsInt(double number) {
	return number == (__int64) number;
}


__int64 Solution3(__int64 number)
{
	cout << "RESULTAT SOLUTION 3" << endl;

	if (IsPrime(number)) {
		return number;
	}
	
	for (int i = 2; i < (number / 2); i++) {
		double temp = (double) number / i;
		if (IsInt(temp)) {
			__int64 t = (__int64)temp;
			if (IsPrime(t)) {
				return t;
			}
		}
	}


	return 0;
}
