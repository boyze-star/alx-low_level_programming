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
	unsigned int index;

	unsigned int sum = 0;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
