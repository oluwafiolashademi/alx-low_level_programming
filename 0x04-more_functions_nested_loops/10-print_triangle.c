#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: numbers of line
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(' ');
			}
			for (i--; i < size; i++)
			{
				_putchar(35);
			}
			for (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
