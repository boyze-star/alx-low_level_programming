#include "main.h"

/* print nine times table from zero */
void times_table(void)
{
	int a;
	int b;
	int c;

	/* initialisation, condition and incrementation of variables */
	for (a = 0;a < 10;a++)
	{
		for (b = 0;b < 10;b++)
		{
			c = a * b;
			if (c == 0)
			{
				_putchar(c + '0');
			}
			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}