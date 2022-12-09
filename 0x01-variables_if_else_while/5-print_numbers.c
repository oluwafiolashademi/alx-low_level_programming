#include <stdio.h>

/**
 * main - A program that prints base 10 numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	putchar('\n');
	return (0);
}
