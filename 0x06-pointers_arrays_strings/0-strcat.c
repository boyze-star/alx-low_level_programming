#include "main.h"

/**
 * _strcat -  function appends the src string to the dest string
 * @src: - source variable
 * @dest: - destination variable
 * Description: Concatenate of two pointers
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
