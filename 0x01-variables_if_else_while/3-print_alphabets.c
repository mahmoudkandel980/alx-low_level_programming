#include <stdio.h>

/**
* main - Main Entry
* Return: 0 (Success)
**/
int main(void)
{
	char letterOne;
	char letterTwo;

	for (letterOne = 'a'; letterOne <= 'z'; letterOne++)
		putchar(letterOne);
	for (letterTwo = 'A'; letterTwo <= 'Z'; letterTwo++)
		putchar(letterTwo);
	putchar('\n');
	return (0);
}
