#include "main.h"

/**
 * _putchar - function prints character
 * @c: character to be printed
 *
 * Return: printed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
