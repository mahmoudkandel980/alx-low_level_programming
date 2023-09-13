#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned char *x;
	int y = 0, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	x = (unsigned char *) main;
	bytes = atoi(argv[1]);
	for (; y < bytes; y++)
	{
		printf("%02x", *(x + y));
		if (y != bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
