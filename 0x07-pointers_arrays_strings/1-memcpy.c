#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: A pointer to the memory to copy @src to
 * @src: The source buffer to copy character from
 * @n: The number of byte to copy from @src
 *
 * Return: A pointer to the destination buffer @dest
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
