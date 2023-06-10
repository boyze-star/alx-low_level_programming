#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes character to stdout
 * @c: character to be printed
 *
 *
 * Return: Always 0(Successs ,1 Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
