#include <main.h>

/**
 * print_square - a function that prints a square
 * @size: size of the square.
 *
 * Return: no return
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(36);
			}
			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
