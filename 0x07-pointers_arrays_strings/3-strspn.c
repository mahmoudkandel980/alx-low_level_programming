#include "main.h"

/**
* _strspn - function
* @s: character
* @accept: character
* Return: bytes from accept
**/

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int z = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[x])
			{
				z++;
				break;
			}
		}
		if (accept[y] == '\0')
			return (z);
	}
	return (z);
}
