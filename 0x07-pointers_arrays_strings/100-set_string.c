#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: the pointer
 * @to: the character string we want to point to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
