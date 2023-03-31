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
	int i;
	int n1 = n;

	for (i = 0; i < n1 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
