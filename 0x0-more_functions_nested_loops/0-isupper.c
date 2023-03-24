#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _isupper - function to check uppercase characters
 *
 * @c:  is a parameter
 *
 * Return: Always 0.
 */
/*
 * checks for uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	return (0);
}
