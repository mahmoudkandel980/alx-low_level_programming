#include "main.h"
#include "stdio.h"

/**
 * print_array - function
 * @a: is an array of int
 * @n: is an int
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; n > x; x++)
			if (x != n - 1)
			{
				printf("%d, ", a[x]);
			}
			else
			{
				printf("%d", a[x]);
			}
	}
	printf("\n");
}
