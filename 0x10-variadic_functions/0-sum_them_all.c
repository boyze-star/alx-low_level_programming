#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: parameter sum
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum;
	va_list arg_par;

	va_start(arg_par, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_par, int);
	}

	va_end(arg_par);
	return (sum);
}
