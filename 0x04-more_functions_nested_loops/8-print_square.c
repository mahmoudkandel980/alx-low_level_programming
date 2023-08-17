#include "main.h"
/**
 *print_square - function prints square of size size.
 *@size: number.
 *Return: void.
 */
void print_square(int size)
{
	int x;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (z = 1; z < size; z++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
