#include "function_pointers.h"

/**
 * _putchar - function prints a sngle character
 * @c: character to be printed
 *
 * Return: Always 0(success), 1(Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
