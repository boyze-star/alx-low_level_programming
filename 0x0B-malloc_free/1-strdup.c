#include "main.h"

/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: string to be duplicated
 *
 * Return: Null if str == Null
 * Null if memory insufficient
 * pointer to newly added string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while ((duplicate[i] = str[i]) != '\0')
	{
		i++;
	}
	return (duplicate);
}
