#include "main.h"

/**
 * jack_bauer - prints 24 h0urs
 *
 * Return: Always return 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			if (m < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(m);
			}
			else if (m >= 10)
			{
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			_puthar('\n');
		}
	}
}
