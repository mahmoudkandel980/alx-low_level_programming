#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: array width
 * @height: array height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x;
    int y;

	if (width < 1 || height < 1)
    {
		return (NULL);
    }

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
            {
				free(arr[x]);
            }
			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
    {
		for (y = 0; y < width; y++)
        {
			arr[x][y] = 0;
        }
    }

	return (arr);
}
