#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	double doubleType;
	long int UnsignedType;
	long long int UnsignedintType;

	/* A C program that prints the size of various types on the computer */
	printf("size of a int: %zu bytes\n", sizeof(intType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));
	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of aa double: %zu bytes\n", sizeof(doubleType));
	printf("size of a long int: %zu bytes\n", sizeof(unsignedType));
	printf("size of a long long int: %zu bytes\n", sizeof(unsignedintType));

	return 0;
}
