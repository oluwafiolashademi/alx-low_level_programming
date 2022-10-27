#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: An array
 * @n: number of element of an array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n, i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
