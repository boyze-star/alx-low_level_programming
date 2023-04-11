#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: address 2D array grid
 * @height: grid height
 *
 * Return: Always 0(Success), 1(Error)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
