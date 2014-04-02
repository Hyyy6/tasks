#include "stdafx.h"


bool* n_2(int n, bool*m)
{


	/*bool* m = (bool*)malloc(32 * sizeof(bool));*/
	int i = 0, a;
	memset(m, 0, 32 * sizeof(bool));

	a = n;

	while (1)
	{
		if (n == 0)
		{
			break;
		}

		a = n >> 1;
		a = a << 1;
		if (a == n)
		{
			m[i] = 0;
		}
		else
		{
			m[i] = 1;
		}

		i++;
		n = n >> 1;
	}

	return m;
}