#include "main.h"
/**
 *print_number - function.
 *@n: number.
 *Return: nothing.
 */
void print_number(int n)
{
	unsigned int var;

	var = n;
	if (var < 0)
	{
		_putchar(45);
		var = -n;
	}
	if (var / 10)
		print_number(var / 10);
	_putchar((var % 10) + '0');
}
