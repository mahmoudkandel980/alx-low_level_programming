#include"main.h"

/**
*
*/

void print_alphabet_x10(void)
{
	int var;
	int varSecond;

	for (var = 0; var <= 9; ++var)
	{
		for (varSecond = 'a'; varSecond <= 'z'; ++varSecond)
			_putchar(varSecond);
		_putchar('\n');
	}
}
