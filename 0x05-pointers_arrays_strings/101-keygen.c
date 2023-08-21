#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function
 * Return: the password
 */

int main(void)
{
	char x;
	int y;

	srand(time(0));
	while (y <= 2645)
	{
		x = rand() % 128;
		y += x;
		putchar(x);
	}

	putchar(2772 - y);
	return (0);
}
