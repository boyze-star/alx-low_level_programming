#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: variable
 * @needle: variable
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (0);
}
