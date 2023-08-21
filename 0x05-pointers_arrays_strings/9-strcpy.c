#include "main.h"

/**
 * print_array - function
 * @dest: is a char
 * @src: is a char
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];

	dest[x] = src[x];
	return (dest);
}
