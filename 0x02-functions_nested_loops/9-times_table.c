#include"main.h"

/**
* times_table - function
*/

void times_table(void)
{
	int number;
	int multu;
	int product;

	for (number = 0; number <= 9; ++number)
	{
		_putchar(48);
		for (multu = 1; multu <= 9; ++multu)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multu;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);

			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
