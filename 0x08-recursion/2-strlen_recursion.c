#include "main.h"

/**
 * _strlen_recursion - function returns string length
 * @s: length of string to bereturned
 *
 * Return: 0(Success), 1(Error)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
