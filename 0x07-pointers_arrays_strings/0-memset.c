#include "main.h"

/**
* _memset - function
* @s: chararcter
* @b: character
* @n: integer
* Return: pointer to memory area
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
		s[x] = b;

	return (s);
}
