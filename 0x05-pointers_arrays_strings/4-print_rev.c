#include "main.h"

/**
 * print_rev - function
 * @s: is an char
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;

	for (z = 0; s[z] != '\0'; ++z)
	{
		y = z;
	}

	for (; y >= x; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
