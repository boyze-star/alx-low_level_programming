#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function copies exisiting string
 * @str: string to e copied
 *
 * Return: string duplicate
 */
char *_strdup(char * str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
	{
		/**
		 * printf("This is an empty str\n");
		 */
		return (NULL);
	}
	length = strlen((str) + 1);
	duplicate = (char *)malloc(length * sizeof(char));
	if (duplicate == NULL)
	{
		/**
		 * printf("Found nothing in initial str\n");
		 */
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
