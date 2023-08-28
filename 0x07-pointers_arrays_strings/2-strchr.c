#include "main.h"

/**
* _strchr - function
* @s: is a string
* @c: is a character in s
* Return: pointer or NULL
**/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	if (s[x] == c)
	{
		return (s + x);
	}
	else
	{
		return ('\0');

	}
}
