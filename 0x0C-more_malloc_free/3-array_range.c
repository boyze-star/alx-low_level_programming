#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
/**
 * int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max -  min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
 */
/**
 * array_range_bc - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
