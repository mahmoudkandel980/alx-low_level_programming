#include "main.h"
#include <stdio.h>

/**
  * _strcat - function
  * @dest: string
  * @src: string
  * Return: pointer
  */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

