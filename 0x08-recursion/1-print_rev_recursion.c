#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse..
 * @s: string to be printed in reverse
 *
 * Return: reversed string, Success (0) Error (1).
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_reverse_recursion(s + 1);
		_putchar(*s);
	}
}
