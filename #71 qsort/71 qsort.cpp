

#include "stdafx.h"


void main()
{
	srand(time(NULL));
	int n = 10, i, na;
	int*arr = (int*)malloc(n*sizeof(int));
	if (arr == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		//arr[i] = i + (rand() % (n - i));
		//arr[i] =rand() % 10;
		arr[i] = i;

		//printf("%d ", arr[i]);
	}
	randomize(arr, n);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	na = n - 1;
	qsort(arr, na);
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("r");
	test();
	return;
}

