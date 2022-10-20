#include "main.h"

/**
 * _isalpha - checkingfor char alphabet
 * @c: the char to be checked
 *
 * Return: 1 if char is letter, lower or upper case, o if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
