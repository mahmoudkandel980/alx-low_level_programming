#include "function_pointers.h"

/**
 * array_iterator - function
 * @array:  array to execute function on
 * @size: array size
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
	{
		return
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
