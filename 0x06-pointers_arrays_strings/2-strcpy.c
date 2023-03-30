#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: variable
 * @src: variable
 * @n: variable
 * Description: copies up to n characters from the string pointed to
 * by src to dest
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = o; i < 0 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[n] = '\0';
	}
	return (dest);
}
