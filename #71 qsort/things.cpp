
#include "stdafx.h"


void randomize(int* array, int n)
{
	int i = 1, j, c;

	srand(time(NULL));
	for (j = 0; j < n; j++)
	{
		i = j + rand() % (n - j);
		if (i == j)
		{
			//printf("%d ", massive[j]);
		}
		else
		{
			array[i] = array[i] + array[j];
			array[j] = array[i] - array[j];
			array[i] = array[i] - array[j];
			//printf("%d ", massive[j]);
		}
	}
	return;
}


void qsort(int* arr, int n)
{
	int i = 0, j = n, point = arr[n >> 1], temp;
	
	while (i <= j)
	{
		while (arr[i] < point)
		{
			i++;
		}
		while (arr[j] > point)
		{
			j--;
		}
				
		if (i <= j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			}
	}

	if(j > 0)
		qsort(arr, j);
	if (n > i)
		qsort(arr + i, n - i);


}