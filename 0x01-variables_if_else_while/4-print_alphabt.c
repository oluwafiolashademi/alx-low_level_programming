#include <stdio.h>

/**
 * main - A program that print lowercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;
	/* A program that print alphabeet in lowercase except for q and e */
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
