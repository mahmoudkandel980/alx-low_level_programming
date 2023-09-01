#include <stdio.h>
#include <stdlib.h>

/**
*main - function
*@argc: is a number
*@argv: is an array
*Return: returns 1 or 0
*/

int main(int argc, char *argv[])
{
int x;
int y = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
x = atoi(argv[1]);
while (x > 0)
{
	y++;
	if ((x - 25) >= 0)
	{
		x = x - 25;
		continue;
	}
	if ((x - 10) >= 0)
	{
		x = x - 10;
		continue;
	}
	if ((x - 5) >= 0)
	{
		x = x - 5;
		continue;
	}
	if ((x - 2) >= 0)
	{
		x = x - 2;
		continue;
	}
	x--;
}
printf("%d\n", y);
return (0);
}
