#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: grid width
 * @height: grid height
 *
 * Return: Null if w/h is 0/negative
 * Null of failure
 * pointer to 2D array if integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
