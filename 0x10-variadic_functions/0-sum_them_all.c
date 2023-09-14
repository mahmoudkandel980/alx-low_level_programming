#include "variadic_functions.h"

/**
 * sum_them_all - function returns the summation
 * @n: amount
 * Return: the summation
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int summation = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		summation += va_arg(valist, int);
	}

	va_end(valist);

	return (summation);
}
