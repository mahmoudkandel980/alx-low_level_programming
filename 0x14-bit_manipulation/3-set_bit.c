#include "main.h"

/**
 * set_bit - function sets the bit at the index
 * 
 * @n: a number to index
 * @index: a bit
 *
 * Return: if successeded 1, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
