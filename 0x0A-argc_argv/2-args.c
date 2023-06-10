#include  "main.h"
#include <stdio.h>

/**
 * main - prints all recieved arguements
 * @argc: arguements count
 * @argv: arguements vector
 *
 * Return: Always (0 Success, 1 Error)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
