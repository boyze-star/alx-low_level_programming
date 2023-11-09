#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list arg_par;
	
	va_start(arg_par, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_par, char *);

		if (str == NULL)
		{
			str = ("nil");
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg_par);
}
