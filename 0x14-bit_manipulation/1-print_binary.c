#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints binary equivilent of a decimal number
 * @n: number to print in binary
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i;

	int num_bits = sizeof(unsigned long int);

	for (i = num_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
