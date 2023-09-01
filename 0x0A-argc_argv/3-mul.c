#include <stdio.h>
#include <stdlib.h>

/**
 * main - fucntion
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;
	int y = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
		y *= atoi(argv[x]);

	printf("%d\n", y);
	return (0);
}
