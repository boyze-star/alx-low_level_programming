#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - function prints character
 * @c: character to be printed
 *
 * Return: 0(Success), 1(Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
