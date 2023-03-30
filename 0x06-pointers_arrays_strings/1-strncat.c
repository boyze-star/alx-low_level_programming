#include "main.h"

/**
 *  _strncat - function concatenates two strings
 *  @src: variable
 *  @dest: variable
 *  @n: variable
 *  Description: function is similar to the _strncat except
 *  it will use at most n bytes
 *  and doesn't to be null-terminated if it contains n
 *  Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (k <= j)
	{
		if (n > 0)
		{
			dest[i] = src[k];
			k++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
