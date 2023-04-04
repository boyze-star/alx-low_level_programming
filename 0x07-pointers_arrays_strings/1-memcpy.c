#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destinaton variable
 * @src: source variable
 * @n: counter variable
 *
 * Returns: Always dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
