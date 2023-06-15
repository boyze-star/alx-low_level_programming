#include "main.h"

/**
 * malloc_checked - function checks if memory is allocated
 * successfully
 * @b: pointer to allocated memory
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
