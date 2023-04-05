#include "main.h"

/**
 * _print_rev_recursion -  function that prints a string in reverse
 * @s: pointer variable
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(&s);
		_putchar(s);
	}
}
