#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
 * main - function computes the absolute value of a number x
 *
 * Return: x value
 */
int abs_value(void)
{
	int num = -10, abs_num = ABS(num);

	printf("%d %d\n", num, abs_num);
	return (0);
}
#endif
