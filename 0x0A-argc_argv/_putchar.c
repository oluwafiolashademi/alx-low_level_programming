#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 *
 * Return: success 1
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
