#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: secomnd string
 * @n: number of bytes
 *
 * Return: Always 0(Success), 1(Error).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *result = (char *)malloc(n * (len1 + len2) + 1);

	if (result == NULL)
	{
		printf("Error: Unable to allocate memory for string concatenation");
		return ('\0');
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
