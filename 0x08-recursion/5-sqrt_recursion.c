#include "main.h"

/**
* _sqrt_recursion - function
* @n: is an integer
* Return: square root or -1
**/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* natural_square - function
* @x: is an integer
* @y: is an integer
* Return: -1 or square root
**/

int natural_square(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == i * i)
		return (i);
	if (n < (i * i))
		return (-1);
	return (_sqrt(n, i + 1));
}
