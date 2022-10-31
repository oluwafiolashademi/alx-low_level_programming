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
	if (s == NULL)
		return (NULL);

	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
