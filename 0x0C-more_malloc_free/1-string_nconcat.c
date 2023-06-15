#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: string concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t total_length;
	size_t len1, len2;

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

	if (n >= len2)
	{
		n = len2;
	}
	total_length = len1 + n + 1;
	result = (char *)malloc(total_length);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncpy(result + len1, s2, n);
	result[total_length - 1] = '\0';

	return (result);
}
