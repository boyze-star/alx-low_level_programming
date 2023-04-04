#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - function that prints the
 * sum of the two diagonals of a square matrix of integers
 * @a: variable
 * @size: variable
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int y;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d ,%d", sum1, sum2);
}
