#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  performs simple operations
* @argc: count of elements
* @argv: array of pointers
*
* Return: Done success (0)
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numberOne;
	int numberTwo;
	char *x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numberOne = atoi(argv[1]);
	x = argv[2];
	numberTwo = atoi(argv[3]);

	if (get_op_func(x) == NULL || x[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*x == '/' && numberTwo == 0) || (*x == '%' && numberTwo == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(x)(numberOne, numberTwo));

	return (0);
}
