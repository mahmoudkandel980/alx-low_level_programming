#include "main.h"
/**
 *print_numbers - function that prints 0 - 9.
 *Return: void.
 */
void print_numbers(void)
{
	int var;

	for (var = 0; var < 10; var++)
	{
		_putchar('0' + var);
	}
	_putchar('\n');
}
