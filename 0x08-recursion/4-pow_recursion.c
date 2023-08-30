#include "main.h"

/**
  *_pow_recursion - function
  *@x: is the number
  *@y: is the power
  *Return: x to the raised to y
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 1)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
