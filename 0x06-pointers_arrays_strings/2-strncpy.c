#include "main.h"

/**
 * _strncpy.c -  function that copies a string.
 * @dest: static variable
 * @src: static variable
 * @i: static variable
 * Description: function should work exactly like strncpy
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;
	int m;

	s = 0;
	m = 0;

	while (s < n && src[s] != '\0')
	{
		s++;
	}
	while (m < n && dest[m] != '\0')
	{
		src[s] = dest[m];
		s++;
		m++;
	}
	src[s] = '\0';

	return (src);
}
