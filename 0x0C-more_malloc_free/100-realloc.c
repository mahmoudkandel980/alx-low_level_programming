#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function
 * @ptr: function parameter
 * @old_size: func
 * @new_size: func
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return ((void *)malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	x = malloc(new_size);
	
	if (x == NULL)
	{
		return (NULL);
	}

	if (old_size > new_size)
	{
		old_size = new_size;
	}

	while (old_size--)
	{
		x[old_size] = ((char *)ptr)[old_size];
	}

	free(ptr);
	
	return ((void *)x);
}
