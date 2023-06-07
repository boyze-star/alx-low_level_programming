#include <stdio.h>
#include <stdlib.h>>

/**
 * _putchar - print string to stout
 * @c: character to be printed
 *
 * Return: Always (0)Success (1)Failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
