#include "main.h"

/**
 * _strpbrk - A function that search a stringfor any of a set of byte
 * @s: The string we look for occurence for
 * @accept: The print we compare with
 *
 * Return: The pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
