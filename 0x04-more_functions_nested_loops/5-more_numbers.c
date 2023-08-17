#include "main.h"

/**
 * more_numbers - function.
 * Return: return from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int varOne;
	int  varTwo;

	for (varOne = 0; varOne < 10; VarOne++)
	{
		for (varTwo = 0; varTwo < 15; varTwo++)
		{
			if (varTwo >= 10)
				_putchar((varTwo / 10) + 48);
			_putchar((varTwo % 10) + 48);
		}
		_putchar('\n');
	}
}
