#include "main.h"

/**
 * puts_half - function
 * @str: is a char
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int x;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		y = (x + 1) / 2;

		while (str[y] != '\0')
		{
			_putchar(str[y]);
			y++;
		}
	}
	else
	{
		y = (x / 2);

		while (str[y] != '\0')
		{
			_putchar(str[y]);
			y++;
		}
	}
	_putchar('\n');
}
