#include "stdafx.h"


void test()
{
	int i, j, n;
	srand(time(NULL));
	for (i = 0; i < 1000000; i++)
	{
		n = rand();

		int* arr = (int*)malloc(n*sizeof(int));
		if (arr == NULL) return;

		for (j = 0; j < n; j++)
		{
			arr[j] = rand();
		}
		qsort(arr, n - 1);
		n -= 1;
		for (j = 0; j < n; j++)
		{
			assert(arr[j] <= arr[j + 1]);
		}

		free(arr);
		if (i % 1000 == 0)
			printf("%d ", i);
	}



}