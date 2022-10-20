#include "main.h"

/**
 * print_alphabet_x10  - A function that prints 10 times the alphabet
 * in lowercase followed by a newline.
 * written by Folashade
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char let;

	while (count++ <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
