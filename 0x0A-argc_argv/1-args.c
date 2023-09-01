#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Return: (success)
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		*argv[x] = *argv[x];

	printf("%d\n", (x - 1));
	return (0);
}
