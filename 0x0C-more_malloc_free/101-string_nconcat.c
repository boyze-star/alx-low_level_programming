#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: memory to be allocated for strings
 *
 * Return: pointer to newly allocated memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 * NULL if function fails
 * if n >= s2, use entire s2 string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;
	unsigned int length_1 = 0, length_2 = 0;

	while (s1 && s1[length_1])
	{
		length_1++;
	}
	while (s2 && s2[length_2])
	{
		length_2++;
	}
	if (n < length_2)
	{
		s = malloc(sizeof(char) * (length_1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (length_1 + length_2 + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (i < length_1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < length_2 && i < (length_1 + length_2))
	{
		s[i++] = s2[j++];
	}
	while (n >= strcmp(s2) && i < (length_1 + length_2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
