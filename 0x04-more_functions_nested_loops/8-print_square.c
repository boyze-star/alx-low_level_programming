#include "main.h"
#include "main2.h"

/**
 * print_square
 * size - var
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;
	size = 0;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
