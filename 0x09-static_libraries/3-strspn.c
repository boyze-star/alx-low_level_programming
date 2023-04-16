#include "main.h"

/**
 * _strspn - returns length of subinitial string
 * @s: input value
 * @accept: input value
 *
 * Return: Always 0(Success),1(Error)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
			}
			else if (accept[i + 1] == '\0')
			{
				return (0);
			}
		}
		s++;
	}
	return (n);
}
