#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: unsigned int variable
 *
 * Return: Always 0(Success), 1(Error).
 */
void *malloc_checked(unsigned int b)
{
	/**
	 * void *ptr = (void *)malloc(b * sizeof(unsigned int));
	 */
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}

	return (ptr);
}
