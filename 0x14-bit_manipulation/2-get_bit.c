#include "main.h"

/**
 * get_bit - function gets the bit
 * @n: a number to index
 * @index: a bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
