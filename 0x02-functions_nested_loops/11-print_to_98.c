#include"main.h"
#include <stdio.h>

/**
* print_to_98 - function
* @n: intger
*/

void print_to_98(int n)
{
	int varOne;
	int varTwo;

	if (n <= 98)
	{
		for (varOne = n; varOne <= 98; varOne++)
		{
			if (varOne != 98)
				printf("%d, ", varOne);
			else if (varOne == 98)
				printf("%d\n", varOne);
		}
	} else if (n >= 98)
	{
		for (varTwo = n; varTwo >= 98; varTwo--)
		{
			if (varTwo != 98)
				printf("%d, ", varTwo);
			else if (varTwo == 98)
				printf("%d\n", varTwo);
		}
	}
}
