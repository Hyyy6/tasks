#include "stdafx.h"

double polynom(double y, double*arr, int p)
{

	int i;
	double b = 0;
	
	for (i = 0; i < p; i++)
	{
		b = b + arr[i] * pow2(y, i);

	}

	return b;

}