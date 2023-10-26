#include "main.h"

int actual_prime(int n,  int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: input integer
 *
 * Return: 1 if integer is prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (actual_prime(2, n));
}

/**
 * actual_prime - checks for prime number
 * @n: input integer
 * @i: iterator
 *
 * Return: prime number
 */
int actual_prime(int n,  int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (actual_prime(n + 1, i));
}
