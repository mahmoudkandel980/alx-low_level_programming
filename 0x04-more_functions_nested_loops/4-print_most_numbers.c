#include "main.h"
/**
 *print_most_numbers - is function that prints numbers form 0 to 9.
 *Return: void.
 */
void print_most_numbers(void)
{
	int var = '0';

	for (; var <= '9'; var++)
	{
		if (var != '2' && var != '4')
			_putchar(var);
	}
	_putchar('\n');
}
