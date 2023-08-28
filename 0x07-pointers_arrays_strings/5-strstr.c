#include "main.h"

/**
 * _strstr - function
 * @haystack: is a string
 * @needle: is a string
 * Return: pointer, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y] && haystack[x + y]; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (haystack + x);
		}
	}
	return (NULL);
}
