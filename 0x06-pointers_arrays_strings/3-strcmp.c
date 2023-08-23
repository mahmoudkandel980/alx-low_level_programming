#include "main.h"

/**
 * _strcmp - functon
 * @s1: string
 * @s2: string
 * Return: 0 or b
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (s1[x] != '\0' && y == 0)
	{
		y = s1[x] - s2[x];
		x++;
	}

	return (y);
}
