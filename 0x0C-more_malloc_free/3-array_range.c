#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Null if min > max
 * Null if malloc fails
 */
int *array_range(int min, int max)
{
	int *pointer;
	int irator = 0;
	int size;

	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (irator = 0; min <= max; irator++)
	{
		pointer[irator] = min++;
	}
	return (pointer);
}
