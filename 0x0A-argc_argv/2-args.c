#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
