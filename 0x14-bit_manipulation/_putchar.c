#include "main.h"

/*
 * _putchar - function prints character to stdout
 * @c: chasracter to be printed
 *
 * Return: single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
