#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints character on screen
 * @c: character to print
 *
 * Return: Always 0(Success) ,1(Error).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
