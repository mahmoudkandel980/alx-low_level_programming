#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: is the array size
 * @c: character
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
        char *x;
        unsigned int y;

        if (size == 0)
        {
                return (NULL);
	}

        x = malloc(sizeof(c) * size);

        if (x == NULL)
	{
                return (NULL);
	}

        for (z = 0; z < size; z++)
                x[z] = c;

        return (x);
}
