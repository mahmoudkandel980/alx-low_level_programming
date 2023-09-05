#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * @ac: is acount
 * @av: is a vector
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	char *string;
    char *str;
	int x;
    int y;
    int z;
    int length = 0;

	if (ac == 0 || av == NULL)
    {
		return (NULL);
    }

	for (x = 0; x < ac; x++)
	{
		y = 0;
		str = av[x];

		while (str[y++])
			length++;
		length++;
	}

	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
    {
		return (NULL);
    }

	for (x = 0, y = 0; x < ac && y < length; x++)
	{
		z = 0;
		str = av[x];

		while (str[z])
		{
			string[y] = str[z];
			y++;
			z++;
		}

		string[y++] = '\n';
	}
    
	string[y] = '\0';

	return (string);
}
