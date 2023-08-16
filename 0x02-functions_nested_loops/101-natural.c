#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* main - Entry point
* Return: Always 0 (success)
*/

int main(void)
{
	int var = 1;
	int sumestion = 0;

	while (var < 1024)
	{
		if (var % 3 == 0)
			sumestion += var;
		else if (var % 5 == 0)
			sumestion += var;

		var++;
	}
	printf("%d\n", sumestion);

	return (0);
}
