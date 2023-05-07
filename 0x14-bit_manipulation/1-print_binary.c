#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_binary - binary representation of a number
 * @n: binary number
 *
 * Return: number representation
 */
void print_binary_recursive(unsigned long int n)
{
	if (n <= 1)
	{
		printf("%lu", n);
		return;
	}

	print_binary_recursive(n / 2);
	printf("%lu", n % 2);
}
/**
 * print_binary - function prints binary representation
 * of a number
 * @n: number to be printed
 *
 * Return: number representation
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	print_binary_recursive(n);
}
