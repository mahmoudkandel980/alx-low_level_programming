#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: the grid
 * @height: is the height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
    {
		free(grid[x]);
    }

	free(grid);
}
