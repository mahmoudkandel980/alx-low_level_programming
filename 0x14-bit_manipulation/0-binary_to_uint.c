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
	unsigned int number;

	for (number = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		number <<= 1;
		number += *b - '0';

	}
	
	return (number);
}
