#include "main.h"

/**
* _memcpy - function
* @dest: character
* @src: character
* @n: integer
* Return: a pointer to destination
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
		dest[x] = src[x];

	return (dest);
}
