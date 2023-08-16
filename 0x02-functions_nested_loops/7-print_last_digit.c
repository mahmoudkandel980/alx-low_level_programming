#include "main.h"

/**
* print_last_digit - function
* @var: var is integer
* Return: integer always
*/

int print_last_digit(int var)
{
	int lastOne = var % 10;

	if (var < 0)
		lastOne = lastOne * -1;

	_putchar(lastOne + '0');
	return (lastOne);
}
