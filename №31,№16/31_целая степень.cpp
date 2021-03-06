// 31_целая степень.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "things.h"
#include "stdlib.h"


void main()
{
	int p, u;
		
	double x, x_0, b;
	int n, s = 0;

	scanf_s("%lf\n%d", &x, &n);

	double a = pow2(x, n);
		
	printf("%.3f\n", a);
		
	printf("Enter the degree of the polynomial\n");

	scanf_s("%d", &p);
	
	if (p < 0)
		return;

	p++;

	double*arr = (double*)malloc(p*sizeof(double));
	if (arr == NULL)
		return;
	printf("Enter the coefficients\n");
		
	for (u = 0; u < p; u++)
	{
		scanf_s("%lf", &arr[u]);
	}

	printf("And the point x_0\n");

	scanf_s("%lf", &x_0);

	b = polynom(x_0, arr, p);

	printf("%.5lf\n", b);

	return;

}

