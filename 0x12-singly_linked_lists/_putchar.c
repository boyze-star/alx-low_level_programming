#include "main.h"

/**
 * _putchar - function prints character to stdout
 * @character to be printed
 *
 * Return: Success (0),Error (1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
