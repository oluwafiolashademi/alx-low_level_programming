#include <stdio.h>

/**
 * main - A program that prints all possible combination
 * of a single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
