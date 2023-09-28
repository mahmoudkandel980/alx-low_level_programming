#include "main.h"

/**
 * clear_bit - function clears the bit at the index
 * @n: a number
 * @index: a bit
 *
 * Return: if successeded 1, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
