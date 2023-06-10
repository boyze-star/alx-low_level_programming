#include "main.h"
#include <stdio.h>

/**
 * main -print the name of the program
 * @argc: counts arguements
 * @argv: arguement vector
 *
 * Return: Always (0 Succcess, 1 Error)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
