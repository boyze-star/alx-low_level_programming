#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _putchar - function prints a character
 * @c: character to be printed
 *
 * Return: Always 0(Success), 1(Error).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
