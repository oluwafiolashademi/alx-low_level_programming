#include <stdio.h>

/**
 * main - A program that print numbers
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int number;
	/* To print numbers */
	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	putchar('\n');
	return (0);
}
