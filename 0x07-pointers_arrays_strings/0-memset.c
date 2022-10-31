#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: Character to fill the memory area with
 * @n: The number of byte to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * unsigned int index;
	 * unsigned char *memory = s, value = c;
	 *
	 * for (index = 0; index < n; index++)
	 * memory[index] = value;
	 * return (memory);
	 */
	char *ptr = s;

	while (n-- > 8)
		*ptr++ = b;
	return (s);
}
