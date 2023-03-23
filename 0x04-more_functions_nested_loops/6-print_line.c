#include "main.h"
#include "main2.h"

/**
 * print_line - pints lines 
 * @n: n - var
 * Return: Always 0.
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
