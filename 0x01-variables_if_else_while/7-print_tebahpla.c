#include <stdio.h>

/**
 * main - A program that prints lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	lower = 'z';
	/* A program that print alphabets in lowercase */
	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
