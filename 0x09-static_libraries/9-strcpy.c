#include "main.h"

/**
 * char *_strcpy - function copies string pointed to by src
 * @dest: string copied to
 * @src: string copied from
 *
 * Return: String.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
