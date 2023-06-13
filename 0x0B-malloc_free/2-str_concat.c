#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function combines two str
 * @s1: first  string
 * @s2: string to be appended
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		/**
		 * printf("Failed to allocate memory.\n");
		 */
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
