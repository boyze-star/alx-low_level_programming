#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number oof integers passed to function
 * @...:variable number of parameters
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int value;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);

		if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
