#include "main.h"

/**
* reverse_array - function
* @a: num
* @n: num
* Return: nothing (empty)
**/

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z = n - 1;

	for (y = 0; y < z; y++, z--)
	{
		x = a[y];
		a[y] = a[z];
		a[z] = x;
	}

}
