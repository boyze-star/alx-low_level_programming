#include "main.h"

/**
 * alloc_grid - function that returns pointer to a 2D array of ints
 * @width: number of colums
 * @height: number of rows
 *
 * Return: Always 0(Success), 1(Error)
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
