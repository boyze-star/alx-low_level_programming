#include "main.h"
#include "_putchar.c"

/**
 * print_chessboard - function that prints a chessboard
 * @a: array of two dimension
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j =0; j < 8; j++)
		{
			_putchar([i][j]);
			_putchar('\n');
		}
	}
}
