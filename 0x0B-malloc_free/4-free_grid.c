#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * previously created by your alloc_grid
 * @grid: previously created grid
 * @height: grid height
 *
 * Return: memory freed
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
