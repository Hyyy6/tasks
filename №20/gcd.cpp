#include "stdafx.h"
#include "gcd.h"
#include "math.h"

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else if (abs(a) > abs(b))
		return gcd(a % b, b);
	/*else if (abs(a) < abs(b))
		return gcd(a, b % a);*/

}