// 31_целая степень.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "things.h"
#include "stdlib.h"


void main()
{
	int p, u;

	bool*m = (bool*)malloc(32 * sizeof(bool));

// [SF] Зачем тут пустые строки?
	

	double x, x_0, b;
	int n, s = 0;

	scanf_s("%lf\n%d", &x, &n);
// [SF] Снова пустые строки


	double a = pow2(x, n, m);

	
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

	//memset(arr, 0, p*sizeof(int));
	

	for (u = 0; u < p; u++)
	{
		scanf_s("%lf", &arr[u]);
	}

	printf("And the point x_0\n");

	scanf_s("%lf", &x_0);

	b = polynom(x_0, arr, p, m);

	printf("%.5lf\n", b);

	return; // [SF] Завершающий return в void-функциях не нужен: и так очевидно, что функция здесь закончится
}

