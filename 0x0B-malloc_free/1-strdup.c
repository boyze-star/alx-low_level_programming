#include "main.h"

/**
 * *_strdup - function returns pointer to newly allocated space in
 * memory which contains copy of string given to parameter
 * @str: string to be copied
 * Return: Always 0(Success), 1(Error)
 */
char *_strdup(char *str)
{
	char *copy = (char *)malloc((strlen(str) + 1) * sizeof(char));
	{
	strcpy(copy, str);
	return (copy);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
