#include "main.h"

/**
 * binary_to_uint - function converts to an unsigned int from a binary number
 * 
 * @b: char
 *
 * Return: converted number
 */

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
	unsigned int number = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
