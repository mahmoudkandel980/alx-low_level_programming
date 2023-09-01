#include <stdio.h>

/**
* main - function
* @argc: is the size of argv
* @argv: is an array
* Return: 0 (sucess)
**/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
