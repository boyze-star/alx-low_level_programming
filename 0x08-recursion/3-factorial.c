#include "main.h"

/**
 * factorial - multiplies a number by every number below it till 1
 * @n: integer variable
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
	return (1);
}
