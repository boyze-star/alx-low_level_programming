#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to string of 0 and 1 char
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t i;
	size_t len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i]  <= '0')
		{
			result = result << 1;
		}
		else if (b[i] >= '1')
		{
			result = result << 1 | 0x01;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
