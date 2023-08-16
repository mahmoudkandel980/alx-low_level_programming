#include"main.h"

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int var;

	for (var = 0; var < 8; ++var)
		_putchar(str[var]);
	_putchar('\n');

	return (0);
}
