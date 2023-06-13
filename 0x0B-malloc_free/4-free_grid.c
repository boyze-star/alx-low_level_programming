#include "main.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * free_grid - frees memory from alloc_griid
 * @grid: grid function to be freed
 * @height: grid height
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid ==NULL)
	{
		return;
	}

	for(i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
