#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: variable
 * #needle: variable
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *p = needle;

	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		{
			return (i);
		}
	}
	return (0);
}
