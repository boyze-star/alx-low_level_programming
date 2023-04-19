#include <stdio.h>
#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return ;
	}
	f(name);
}
