#include "main.h"
#include <stdlib.h>

/**
 * _strcat - functio0n concatenates two strings
 * @src - source variabe 
 * @dest - destination variable 
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char s1[100] = "Programming", s2[] = "has become a part of my life.";
	/**
	 * int *src , *dest;
	 */

	length = 0;

	while (s1[src] != '\0')
	{
		++src;
	}

	for (j = 0; s2[dest] != '\0, ++src, ++dest)
	{
		s1[src] = s2[dest];
	}

	s1[length] = '\0';
	printf("After concatenation: ");
	puts(s1);

	return (0);
}
