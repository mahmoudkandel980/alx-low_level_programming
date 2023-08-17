#include "main.h"

/**
 * print_triangle - function
 * @size: number
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			z = size - x - 1;
			if (y < z)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
