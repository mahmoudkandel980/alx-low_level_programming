#include"main.h"

/**
* main - Entry point
* Return: Always 0 (success)
*/

int main(void)
{
	int sumestion;
	int number;

	for (number = 0; number < 1024; ++number)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			sumestion += number;
	}
	printf("%d\n", sumestion);

	return (0);
}
