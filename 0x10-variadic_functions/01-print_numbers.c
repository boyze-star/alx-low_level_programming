#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers followed by new line
 * @separator: string printedbetween numbers
 * @n: number of integers passed to function
 * @...: variablr=e nymbers tobe printed
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
