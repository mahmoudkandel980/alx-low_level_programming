#include "main.h"

/**
 * puts2 - function
 * @str: is a char
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int x = 0;
	int s = 0;
	int z;
	char *var = str;

	while (*var != '\0')
	{
		var++;
		x++;
	}

	s = x - 1;

	for (z = 0 ; z <= s ; z++)
	{
		if (z % 2 == 0)
	{
		_putchar(str[z]);
	}
	}
	_putchar('\n');
}

