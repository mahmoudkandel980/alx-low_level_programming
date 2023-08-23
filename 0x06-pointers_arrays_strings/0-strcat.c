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
        int y;

        while (dest[x])
                dlen++;

        for (y = 0; src[y] != 0; y++)
        {
                dest[x] = src[y];
                x++;
        }

        dest[x] = '\0';
        return (dest);
}
