#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function.
 * @argc: is a number
 * @argv: is an array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x, y;
	int z = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}

	printf("%d\n", z);
	return (0);
}
