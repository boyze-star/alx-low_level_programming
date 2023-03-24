#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * this program evaluates characters
 * and checks for uppercase values
 * @c: 
 */
/* _isupper is function to check uppercase characters */
int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	return (0);
}
