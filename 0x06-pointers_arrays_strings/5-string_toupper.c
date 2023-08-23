#include "main.h"

/**
*string_toupper - function
*@str: string
*Return: string
*/

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x++])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
	}

	return (str);
}
