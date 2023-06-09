#include "main.h"

/**
 * strpbrk - function that searches a string for any of a set of bytes
 * @s: variable
 * @accept: variable
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (0);
			}
		}
		s++;
	}
	return ('\0');
}
