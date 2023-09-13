#include "function_pointers.h"

/**
 * array_iterator - function
 * @array:  array to execute function on
 * @size: array size
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (!array || !action)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
