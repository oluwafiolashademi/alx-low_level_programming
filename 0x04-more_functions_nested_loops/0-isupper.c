#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @c: The number to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
