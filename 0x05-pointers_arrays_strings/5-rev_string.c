#include "main.h"

/**
 * rev_string - function
 * @s: is a char
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	y--;

	while (y > x)
	{
		z = s[y];
		s[y--] = s[x];
		s[x++] = z;
	}
}
