#include "main.h"

/**
 * _memset - fill memory block with specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}