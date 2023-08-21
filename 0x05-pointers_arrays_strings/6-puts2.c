#include "main.h"

/**
 * puts2 - function
 * @str: is a char
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
