// 20_нод.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "gcd.h"
#include "math.h"


int main()
{
	int a, b, c;
	scanf_s("%d\n%d", &a, &b);
	if (abs(b) > abs(a))
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	c = gcd( a, b);
	printf("%d\n", abs(c));
	return 0;
}

