#include "stdafx.h"
#include "rational.h"
#include "math.h"

int gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (b > a)
	{
		b = a + b;
		a = b - a;
		b = b - a;
	}
	if (b == 0)
		return a;
	else if (abs(a) > abs(b))
		return gcd(a % b, b);
	
	
}