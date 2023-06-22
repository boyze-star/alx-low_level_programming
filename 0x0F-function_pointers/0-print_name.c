#include "function_pointers.h"

/*
 * print_name - function checks if function pointer is valid
 * @name: name tp be printed
 * @f: array of pointers
 *
 * Retuen: Void
 */
void print_name(char *name, void (*f)(char *))
{
	/**
	 * if (f != NULL)
	 * {
	 * (*f)(name);
	 * }
	 */
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
