#include "main.h"
#include <math.h>

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 * @x: base variable
 * @y: exponent variable
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		z = pow(x, y);
		return (z);
	}
}
