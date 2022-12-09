#include <stdio.h>

/**
 * main - A program to print lowercase and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	/* A program that print alphabets in lowercase and uppercase */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
		putchar('\n');
	return (0);
}
