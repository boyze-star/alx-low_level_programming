#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: variable
 * @accept: variable
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int position = 0;

	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
			position++;

		}
		if (accept[i + 1] == '\0')
		{
			return (0);
		}
	}
	return (0);
}
