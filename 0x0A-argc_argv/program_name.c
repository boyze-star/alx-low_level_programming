#include <stdio.h>
#include "main.h"

/**
 * print_function_name - function prints its name
 * @name: parameter passed to function
 *
 * Return: Always 0.
 */
int print_function_name(char *name)
{
	printf("The name of this function is: %s\n", name);
	return (0);
}
int main(int argc_attribute_((unused)), char *argv[])
{
	print_function_name(*argv);
	return (0);
}
