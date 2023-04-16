#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: char to check
 *
 * Return: Always 0(Success), 1(Error).
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
