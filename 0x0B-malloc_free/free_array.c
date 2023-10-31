#include "main.h"

/**
 * free_array - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}
