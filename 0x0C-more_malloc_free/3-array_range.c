#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: minimum
 * @max: maximum
 * Return: NULL || pointer
 */

int *array_range(int min, int max)
{
	int *x, y;

	if (min > max)
	{
		return (NULL);
	}

	x = malloc((max - min + 1) * sizeof(*x));
	
	if (x == NULL)
	{
		return (NULL);
	}

	for (y = 0; min + y <= max; y++)
	{
		x[y] = min + y;
	}
	
	return (x);
}
