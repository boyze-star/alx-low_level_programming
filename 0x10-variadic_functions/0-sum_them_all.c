#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - return sum of all its parameters
 * @n: numbver of parameters
 *
 * Return: Always 0(Success, 1(Error)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
