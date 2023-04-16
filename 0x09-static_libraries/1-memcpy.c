#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: memory storage
 * @src: memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
