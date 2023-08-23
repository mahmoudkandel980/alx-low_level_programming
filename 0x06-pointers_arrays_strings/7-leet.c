#include "main.h"

/**
  * leet - function
  * @s: string
  * Return: string
  */

char *leet(char *s)
{
	int x = 0;
	int y = 0;
	int z = 5;
	char array1[5] = {'A', 'E', 'O', 'T', 'L'};
	char array2[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if (s[x] == array1[y] || s[x] - 32 == array1[y])
			{
				s[x] = array2[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}
