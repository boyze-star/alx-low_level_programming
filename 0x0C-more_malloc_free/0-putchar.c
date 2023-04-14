#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: Always 0(Success), 1(Error).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
