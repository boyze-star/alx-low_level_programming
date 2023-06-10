#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print sum of two numbers
 * @argc: arguements counnt
 * @argv: arguemeens vector
 *
 * Return: Always (0 Success, 1 Error)
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Erroor\n");
		return (1);
	}
}
