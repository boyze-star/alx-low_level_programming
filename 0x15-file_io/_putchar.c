#include "main.h"

/**
 * _putchar - function writes character to stdout
 * @c: char to be printed
 *
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
