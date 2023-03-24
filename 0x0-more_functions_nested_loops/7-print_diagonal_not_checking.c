#include "main.h"
#include "main2.h"

/**
 * print_diagonal - print diagonal lines
 * n - var
 * Returns: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; y++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
		break;
	}
	else
	{
		_putchar('\n');
	}
}
