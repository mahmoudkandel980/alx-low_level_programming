#include "main.h"

/**
 * binary_to_uint - function converts to an unsigned int from a binary number
 * 
 * @b: char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int length, base;

	if (!b)
		return (0);

	x = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base = 1; length >= 0; length--, base *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			x += base;
		}
	}

	return (x);
}
