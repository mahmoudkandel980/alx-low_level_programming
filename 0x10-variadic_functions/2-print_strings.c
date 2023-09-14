#include "variadic_functions.h"

/**
 * print_strings - function prints strings.
 * @separator: string
 * @n: number of strings
 * Return: void (Nothing)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *str;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (x < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(list);
}
