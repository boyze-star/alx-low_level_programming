#include "main.h"

/**
 * *create_array - creates array of char
 * and initialzes it with special char
 * @size: arguement size
 * @c: variable
 *
 * Return: Always 0(Success), 1(Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *char_array = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (char_array);
}
