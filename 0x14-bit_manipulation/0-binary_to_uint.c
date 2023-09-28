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
	int j;
	unsigned int number;

	number = 0;
	if (!b)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		number <<= 1;
		if (b[j] == '1')
		{
			number += 1;
		}
	}
	
	return (number);
}
