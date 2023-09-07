#include "main.h"

/**
 * malloc_checked - function
 * @b: is the bytes
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	
	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
