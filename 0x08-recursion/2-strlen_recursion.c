#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string for length to be returned
 *
 * Return: String length, success (0) error (1)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
