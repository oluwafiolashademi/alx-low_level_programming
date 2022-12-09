#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	char lower;
	/* A program that print alphabets in lowercase */
	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
