#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: memory of an array
 * @size: size of memory bytes
 *
 * Return: pointer to allocated memory
 * Null if nmemb/size == 0
 * Null if mallopc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_memory;
	unsigned int bytes = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocated_memory = malloc(nmemb * size);
	if (allocated_memory  == 0)
	{
		return (NULL);
	}
	for (bytes = 0; bytes < (nmemb * size); bytes++)
	{
		allocated_memory[bytes] = 0;
	}
	return (allocated_memory);
}
