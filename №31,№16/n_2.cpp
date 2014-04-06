#include "stdafx.h"


bool* n_2(int n)
{

	int i = 0, a;
	bool*m = (bool*)malloc(32 * sizeof(bool));
	if (m == NULL)
		return 0;
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