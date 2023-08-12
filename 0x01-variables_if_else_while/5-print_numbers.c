#include <stdio.h>

/**
* main - Main Enty
* Return: 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		printf("%d", c);
	}
	printf("\c");
	return (0);
}
