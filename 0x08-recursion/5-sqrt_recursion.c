#include "main.h"

/**
* _sqrt_recursion - function
* @n: is an integer
* Return: square root or -1
**/

int _sqrt_recursion(int n)
{
	return (natural_square(n, 1));
}

/**
* natural_square - function
* @x: is an integer
* @y: is an integer
* Return: -1 or square root
**/

int natural_square(int x, int y)
{
	if (x == (y * y))
		return (y);
	if (x < (y * y))
		return (-1);
	return (natural_square(x, y + 1));
}
