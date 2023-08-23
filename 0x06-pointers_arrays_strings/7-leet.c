#include "main.h"

/**
* leet - function
*@str: string
*Return: string
*/

char *leet(char *str)
{
	int x = 0;
	int y;
	char z[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[x] == z[y] ||
			 str[x] - 32 == z[y])
				str[x] = y + '0';
		}
	}
	return (str);
}
