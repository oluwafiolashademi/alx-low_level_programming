#include "main.h"
#include <stdio.h>

/**
 * print_array - To rint an element of array
 * @n: number of value to be printed
 * @a: array
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			print(",");
	}

	printf("\n");
}
