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
	unsigned int sum, pwr;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (pwr = 1, sum = 0, length--; length >= 0; length--, pwr *= 2)
	{
		if (b[length] == '1')
			sum += pwr;
	}

	return (sum);
}
