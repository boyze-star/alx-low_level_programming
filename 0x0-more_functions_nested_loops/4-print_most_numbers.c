#include "main.h"
#include "main2.h"

/**
 * print_most_numbers - checks for digits
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
			_putchar(a);
			}
		}
	}
	_putchar('\n');

}
