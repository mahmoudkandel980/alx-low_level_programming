#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function.
 * @s1: character
 * @s2: character
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int x;
    int y;
    int lengthOne;
    int lengthTwo;
    int length;
	char *result;

	lengthOne = lengthTwo = 0;

    if(s1 !=NULL || s2 != NULL){
        if (s1 != NULL)
        {
            x = 0;
            while (s1[x++] != '\0')
                lengthOne++;
        }

        if (s2 != NULL)
        {
            x = 0;
            while (s2[x++] != '\0')
                lengthTwo++;
        }
    }

	length = lengthOne + lengthTwo;
	result = (char *)malloc(sizeof(char) * (length + 1));

	if (result == NULL)
    {
		return (NULL);
    }

	for (x = 0; x < lengthOne; x++)
    {
		result[x] = s1[x];
    }

	for (y = 0; y < lengthTwo; y++, x++)
    {
        result[x] = s2[y];    
    }
    
	result[length] = '\0';

	return (result);
}
