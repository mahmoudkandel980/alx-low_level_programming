#include "main.h"

/**
 * swap_int - function
 * @a: is an int
 * @b: is an int
 * Return: Always 0 (success);
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
