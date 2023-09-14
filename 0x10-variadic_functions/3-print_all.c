#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - function
  *@format: collection of type
  *Return: void.
  */

void print_all(const char * const format, ...)
{
	unsigned int x;
	va_list arguments;
	char *s, *separatorString;

	va_start(arguments, format);

	separatorString = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
			{
				printf("%s%c", separatorString,  va_arg(arguments, int));
				break;
			}
			case 'i':
			{
				printf("%s%d", separatorString, va_arg(arguments, int));
				break;
			}
			case 'f':
			{
				printf("%s%f", separatorString, va_arg(arguments, double));
				break;
			}
			case 's':
			{
				s = va_arg(arguments, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separatorString, s);
				break;
			}
			default:
				x++;
				continue;
		}
		separatorString = ", ";
		x++;
	}

	printf("\n");
	va_end(arguments);
}
