#include "main.h"

/**
 * string_nconcat - is a function concatenates two strings.
 * @s1: is astring
 * @s2: is a string
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y = 0;
	unsigned int z = 0;
	unsigned int i;

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	while (s1[y] != '\0')
	{
		y++;
	}

	while (s2[z] != '\0')
	{
		z++;
	}

	if (n > z)
	n = z;
	x = malloc((y + n + 1) * sizeof(char));

	if (x == NULL)
	{
		return (0);
	}

	for (i = 0; i < y; i++)
	{
		x[i] = s1[i];
	}

	for (; i < (y + n); i++)
	{
		x[i] = s2[i - y];
	}

	x[i] = '\0';

return (x);
}
