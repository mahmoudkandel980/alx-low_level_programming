#include "main.h"

/**
 * flip_bits - function return number of bits
 *
 * @n: a number
 * @m: a number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int counter = 0;

	while (x)
	{
		if (x & 1ul)
			counter++;
		x = x >> 1;
	}
	return (counter);
}
