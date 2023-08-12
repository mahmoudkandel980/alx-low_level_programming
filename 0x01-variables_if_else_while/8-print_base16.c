#include <stdio.h>
/**
* main - main Entry
* Return: 0 (success)
*/
int main(void)
{
	char chr;
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (chr = 'a'; chr < 'g'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
