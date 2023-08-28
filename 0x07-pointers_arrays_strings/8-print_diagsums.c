#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function
* @a: array
* @size: array size
**/

void print_diagsums(int *a, int size)
{
	int x, y;
	int sumOne = 0, sumTwo = 0;

	for (x = 0; x < size * size; x += (size + 1))
		sumOne += a[x];

	for (y = size - 1; y < size * size - (size - 1); y += (size - 1))
		sumTwo += a[y];

	printf("%d, %d\n", sumOne, sumTwo);
}
