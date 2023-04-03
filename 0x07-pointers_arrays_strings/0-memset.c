#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte c.
 * @s: char variable
 * @b: char variable
 * @n: unsigned int variable
 *
 * Return: Always pointer.
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
