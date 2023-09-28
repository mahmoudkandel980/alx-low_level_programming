#include "main.h"

/**
 * print_binary - function prints a number as binary string
 * @n: a number
 *
 * Return: void (no return)
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, print = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
