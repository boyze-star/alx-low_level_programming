#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Null on failure
 * if Null is passed, treat as empty string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length_1 = 0;
	unsigned int length_2 = 0;

	while (s1 && s1[length_1])
	{
		length_1++;
	}
	while (s2 && s2[length_2])
	{
		length_2++;
	}
	new_str = malloc(sizeof(char) * (length_1 + length_2 + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < length_1)
		{
			new_str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (length_1 + length_2))
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str = '\0';
	return (new_str);
}
