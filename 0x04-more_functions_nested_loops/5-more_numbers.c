#include "main.h"

/**
 * more_numbers - number function
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (j = 0; j < 10; j++)
	{
		k = 0;
		l = 0;
		for (i = 48; i < 63; i++)
		{
			if (!(i > 57))
				l = i;
			else
			{
				l = i - 10;
				k = 49;
				_putchar(k);
			}
			_putchar(l);
		}
		_putchar('\n');
	}
}
