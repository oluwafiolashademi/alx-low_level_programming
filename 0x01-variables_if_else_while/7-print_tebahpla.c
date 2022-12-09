#include <stdio.h>

/**
 * main - A program that prints lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;
	/* A program that print alphabets in lowercase */
	for (lower = 'z'; lower >= 'a'; lower++)
		putchar(lower);
	putchar('\n');
	return (0);
}
