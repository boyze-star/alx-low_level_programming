#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
 * @n: natural square root
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural
 * square root of number
 * @n: square root number
 * @i: iterator
 *
 * Return: natural square root number
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
