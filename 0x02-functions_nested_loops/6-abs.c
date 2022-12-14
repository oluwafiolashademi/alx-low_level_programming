#include "main.h"

/**
 * _abs - compute the abs value of an integer
 * @n: the integer in question
 *
 * Return: the abs of the integer.
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
