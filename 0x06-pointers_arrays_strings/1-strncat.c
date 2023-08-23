#include "main.h"

/**
* *_strncat - function.
* @dest: string
* @src: string
* @n: number
* Return: pointer
**/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	if (n <= 0)
		return (dest);

	while (dest[x] != '\0')
		x++;

	while (y < n && src[y] != '\0')
		dest[x++] = src[y++];

	dest[x++] = '\0';
	return (dest);
}
