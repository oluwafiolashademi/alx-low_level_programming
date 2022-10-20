#include "main.h"
/**
 * _islower - To check if char is a lowecase
 * @c: is the character to checked.
 * Return: 1 if char is a lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
