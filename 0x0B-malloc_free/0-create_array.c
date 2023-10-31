#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to be initialized
 *
 * Return: Null if size is 0, pointer to array
 * or Null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}
	while (x < size)
	{
		*(ptr + x) = c;
		x++;
	}

	*(ptr + x) = '\0';
	return (ptr);
}
