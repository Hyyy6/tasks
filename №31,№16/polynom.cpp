#include "stdafx.h"

double polynom(double y, double*arr, int p, bool*m)
{
	int i;
	double b = 0;
	
	for (i = 0; i < p; i++)
	{
		b = b + arr[i] * pow2(y, i, m);

	}




	return b;
}