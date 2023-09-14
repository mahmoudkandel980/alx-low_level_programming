#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - functon prints numbers
 * @separator: string
 * @n: number of integer
 * Return: void (Nothing)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
