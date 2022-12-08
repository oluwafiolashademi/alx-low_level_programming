#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	/* A C program that prints the size of various types on the computer */
	printf("size of a int: %lu byte(s)\n", sizeof(int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of aa double: %lu byte(s)\n", sizeof(double));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));

	return (0);
}
