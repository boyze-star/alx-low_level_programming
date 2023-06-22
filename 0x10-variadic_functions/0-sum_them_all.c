#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: number of total arguements
 * @...: variable num of parameters
 *
 * Return: If (n == 0) ,return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, value;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);

	return (sum);
}
