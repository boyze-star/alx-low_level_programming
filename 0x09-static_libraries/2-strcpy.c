#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string destination (input value)
 * @src: string source (input value)
 * @n: number of bytes (input value)
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
