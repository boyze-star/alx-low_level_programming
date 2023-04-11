#include "main.h"

/**
 * *str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0(Success), 1(Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	strcpy(concatenate, s1);
	strcpy(concatenate, s2);
	return (concatenate);
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
}
