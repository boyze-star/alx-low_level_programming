#include "variadic_functions.h"


/**
 * print_strings - function prints strings followed by new line
 * @separator: stringprinted between strings
 * @n: number of strings passed to function
 * @...: variable number of strings to be printed
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
