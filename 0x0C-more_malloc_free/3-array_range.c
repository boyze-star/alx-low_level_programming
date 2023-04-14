#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: Always 0(Success), 1(Error).
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

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
