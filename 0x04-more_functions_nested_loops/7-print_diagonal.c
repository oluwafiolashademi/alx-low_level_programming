#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: number of times that the diagonal line is printed
 * Return: Always return 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
