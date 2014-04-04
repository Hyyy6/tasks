#include "stdafx.h"




double pow2(double x, int n, bool*m)
{
	int s = 0; // [SF] Эту переменную стоило бы назвать как-нибудь более выразительно, например, negative


	if (n < 0)
	{
		n = abs(n);
		s = 1;
	}

	double x_n = 0, x1;
	int j, k = 2;
	bool*arr = n_2(n, m);

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
			x1 = x1*x1; // [SF] Неконсистентное форматирование: где-то ты разделяешь операторы пробелами, а где-то нет

		for (j = 1; j < i; j++)
			k = k * 2;

		x_n = x1 * pow2(x, n - k, m);
	}

	if (s == 1)
		x_n = 1 / x_n;

	return x_n;
}
