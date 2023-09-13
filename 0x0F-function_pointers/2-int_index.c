#include "function_pointers.h"

/**
* int_index - function searches for an integer
* @array: pointer to an array
* @size: number of elements in array
* @cmp: pointer to a function to be used to compare values
*
* Return: Done success (0)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (!array || !cmp)
	{
		return (-1);
	}

	for (; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
