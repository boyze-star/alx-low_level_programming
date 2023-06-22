#include "function_pointers.h"


/**
 * array_iterator - prints each array elem on a new line
 * @array: array of elem
 * @size: number of elem to print
 * @action: regular or hex print
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
