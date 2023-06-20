#ifndef SUM_H
#define SUM_H
#include "main.h"

#define SUM(x, y) ((x) + (y))
/**
 * abs_sum - function computes the sum of the numbers x and y
 *
 * Return: sum of x and y
 */
int abs_sum(void)
{
	int x = 10, y = 5, sum = SUM(x, y);

	printf("%d %d %d\n", x, y, sum);
	return (0);
}

#endif
