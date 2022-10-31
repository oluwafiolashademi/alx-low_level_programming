#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: the character to be located
 *
 * Return: A pointer to the first occurence if c is found
 * and NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0')
}
