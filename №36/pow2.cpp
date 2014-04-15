#include "stdafx.h"
#include "rational.h"



int pow2(int x, int n)
{
	int negative_number = 0;

	if (n < 0)
	{
		n = abs(n);
		negative_number = 1;
	}

	int x_n = 0, x1;
	int j, k = 2;
	bool*arr = n_2(n);

	int i = 31;

	if (n == 1)
		return x;

	else if (n == 0)
		return 1;

	else

	{
		while (arr[i] == 0)
			i--;

		arr[i] = 0;

		x1 = x;

		for (j = 0; j < i; j++)
			x1 = x1 * x1;

		for (j = 1; j < i; j++)
			k = k * 2;

		x_n = x1 * pow2(x, n - k);
	}

	if (negative_number == 1)
		x_n = 1 / x_n;

	return x_n;

}