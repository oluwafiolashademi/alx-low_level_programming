#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: Where we find the occurence
 * @needle: what we look for in the occurence
 *
 * Return: pointer to the begining of a substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
