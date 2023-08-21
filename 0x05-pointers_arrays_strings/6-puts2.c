#include "main.h"

/**
* _strlen - function
* @s: is a char
* Return: x
**/

int _strlen(char *s)
{
	int x;
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	x = y;
	
	return (y);
}

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
