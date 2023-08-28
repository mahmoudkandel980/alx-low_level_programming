#include "main.h"

/**
 * print_diagsums - function
 * @a: pointer to the first element of the matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sumOne = 0;
	int sumTwo = 0;

	for (x = 0; x < size; x++)
	{
		sumOne = sumOne + a[x * (size + 1)];
		sumTwo = sumTwo + a[(x + 1) * (size - 1)];
	}
	printf("%d, %d\n", sumOne, sumTwo);
}
