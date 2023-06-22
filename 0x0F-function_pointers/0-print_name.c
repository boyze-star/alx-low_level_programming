#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: name to be printed
 * @f: array of pointers to function
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
