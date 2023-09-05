#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: the source string
 * Return:a pointer
 */
char *_strdup(char *str)
{
	char *strout;
	int x;
	int length = 0;

	if (str == NULL)
    {
		return (NULL);
    }

	while (str[length] != '\0')
    {
		length++;
    }

	strout = (char *)malloc((sizeof(char) * length) + 1);

	if (strout == NULL)
    {
		return (NULL);
    }

	for (x = 0; x < length; x++)
    {
		strout[x] = str[x];
    }
    
	strout[length] = '\0';

	return (strout);
}
